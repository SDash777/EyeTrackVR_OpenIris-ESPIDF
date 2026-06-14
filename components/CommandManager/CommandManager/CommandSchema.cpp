#include "CommandSchema.hpp"

void to_json(nlohmann::json& j, const WifiPayload& payload)
{
    j = nlohmann::json{
        {"name", payload.name},         {"ssid", payload.ssid},       {"bssid", payload.bssid},
        {"password", payload.password}, {"channel", payload.channel}, {"power", payload.power},
    };
}

void from_json(const nlohmann::json& j, WifiPayload& payload)
{
    if (!j.is_object()) return;
    payload.name = j.value("name", std::string("main"));
    payload.ssid = j.value("ssid", std::string(""));
    payload.password = j.value("password", std::string(""));
    payload.channel = j.contains("channel") && j["channel"].is_number() ? j["channel"].get<uint8_t>() : 0;
    payload.power = j.contains("power") && j["power"].is_number() ? j["power"].get<uint8_t>() : 0;

    if (j.contains("bssid") && j["bssid"].is_string())
    {
        payload.bssid = j["bssid"].get<std::string>();
    }
}

void to_json(nlohmann::json& j, const UpdateWifiPayload& payload)
{
    j = nlohmann::json{
        {"name", payload.name},         {"ssid", payload.ssid},       {"bssid", payload.bssid},
        {"password", payload.password}, {"channel", payload.channel}, {"power", payload.power},
    };
}

void from_json(const nlohmann::json& j, UpdateWifiPayload& payload)
{
    if (!j.is_object()) return;
    payload.name = j.value("name", std::string("main"));
    if (j.contains("ssid") && j["ssid"].is_string())
    {
        payload.ssid = j["ssid"].get<std::string>();
    }

    if (j.contains("bssid") && j["bssid"].is_string())
    {
        payload.bssid = j["bssid"].get<std::string>();
    }

    if (j.contains("password") && j["password"].is_string())
    {
        payload.password = j["password"].get<std::string>();
    }

    if (j.contains("channel") && j["channel"].is_number())
    {
        payload.channel = j["channel"].get<uint8_t>();
    }

    if (j.contains("power") && j["power"].is_number())
    {
        payload.power = j["power"].get<uint8_t>();
    }
}

void to_json(nlohmann::json& j, const UpdateAPWiFiPayload& payload)
{
    j = nlohmann::json{{"ssid", payload.ssid}, {"password", payload.password}, {"channel", payload.channel}};
}

void from_json(const nlohmann::json& j, UpdateAPWiFiPayload& payload)
{
    if (j.contains("ssid"))
    {
        payload.ssid = j.at("ssid").get<std::string>();
    }

    if (j.contains("password"))
    {
        payload.password = j.at("password").get<std::string>();
    }
    if (j.contains("channel"))
    {
        payload.channel = j.at("channel").get<uint8_t>();
    }
}

void to_json(nlohmann::json& j, const UpdateCameraConfigPayload& payload)
{
    j = nlohmann::json{
        {"vflip", payload.vflip}, {"href", payload.href}, {"framesize", payload.framesize}, {"quality", payload.quality}, {"brightness", payload.brightness},
    };
}

void from_json(const nlohmann::json& j, UpdateCameraConfigPayload& payload)
{
    if (j.contains("vflip"))
    {
        payload.vflip = j.at("vflip").get<uint8_t>();
    }
    if (j.contains("href"))
    {
        payload.href = j.at("href").get<uint8_t>();
    }
    if (j.contains("framesize"))
    {
        payload.framesize = j.at("framesize").get<uint8_t>();
    }
    if (j.contains("quality"))
    {
        payload.quality = j.at("quality").get<uint8_t>();
    }
    if (j.contains("brightness"))
    {
        payload.brightness = j.at("brightness").get<uint8_t>();
    }
}