#pragma once

#include <DependencyRegistry.hpp>
#include <Preferences.hpp>
#include <ProjectConfig.hpp>
#include <StateManager.hpp>
#include <memory>
#include <wifiManager.hpp>
#include "freertos/queue.h"

// Stub for device_commands / main_globals linkage in unit tests.
void force_activate_streaming();

namespace CommandsTests
{
void init_test_environment();

std::shared_ptr<DependencyRegistry> make_registry();
std::shared_ptr<DependencyRegistry> make_registry_with_one(DependencyType only);
std::shared_ptr<DependencyRegistry> make_registry_with_wifi();

const std::string& result_message(const CommandResult& result);
}  // namespace CommandsTests
