#include "test_support.hpp"

#include <CommandResult.hpp>
#include "esp_err.h"
#include "nvs_flash.h"

namespace
{
Preferences g_preferences;
std::shared_ptr<ProjectConfig> g_project_config;
QueueHandle_t g_event_queue = nullptr;
QueueHandle_t g_led_queue = nullptr;
StateManager* g_state_manager = nullptr;
std::shared_ptr<WiFiManager> g_wifi_manager;
bool g_environment_ready = false;
}  // namespace

void force_activate_streaming() {}

namespace CommandsTests
{
void init_test_environment()
{
    if (g_environment_ready)
    {
        return;
    }

    esp_err_t ret = nvs_flash_init();
    if (ret == ESP_ERR_NVS_NO_FREE_PAGES || ret == ESP_ERR_NVS_NEW_VERSION_FOUND)
    {
        ESP_ERROR_CHECK(nvs_flash_erase());
        ret = nvs_flash_init();
    }
    ESP_ERROR_CHECK(ret);

    g_project_config = std::make_shared<ProjectConfig>(&g_preferences);
    g_project_config->load();

    g_event_queue = xQueueCreate(4, sizeof(SystemEvent));
    g_led_queue = xQueueCreate(4, sizeof(uint32_t));
    g_state_manager = new StateManager(g_event_queue, g_led_queue);
    g_wifi_manager = std::make_shared<WiFiManager>(g_project_config, g_event_queue, g_state_manager);

    g_environment_ready = true;
}

std::shared_ptr<DependencyRegistry> make_registry()
{
    init_test_environment();
    auto registry = std::make_shared<DependencyRegistry>();
    registry->registerService<ProjectConfig>(DependencyType::project_config, g_project_config);
    return registry;
}

std::shared_ptr<DependencyRegistry> make_registry_with_one(const DependencyType only)
{
    init_test_environment();
    auto registry = std::make_shared<DependencyRegistry>();
    if (only == DependencyType::project_config)
    {
        registry->registerService<ProjectConfig>(DependencyType::project_config, g_project_config);
    }
    return registry;
}

std::shared_ptr<DependencyRegistry> make_registry_with_wifi()
{
    init_test_environment();
    auto registry = make_registry();
    registry->registerService<WiFiManager>(DependencyType::wifi_manager, g_wifi_manager);
    return registry;
}

const std::string& result_message(const CommandResult& result)
{
    const auto& data = result.getData();
    if (data.is_string())
    {
        static thread_local std::string cached = data.get<std::string>();
        cached = data.get<std::string>();
        return cached;
    }

    static const std::string empty;
    return empty;
}
}  // namespace CommandsTests
