#pragma once

#include <vector>

namespace inst::config
{
    static const std::string appDir = "sdmc:/switch/NSAInstaller";
    static const std::string configPath = appDir + "/config.json";
    static const std::string appVersion = "1.0.0";

    extern std::string gAuthKey;
    extern std::string sigPatchesUrl;
    extern std::vector<std::string> updateInfo;
    extern int languageSetting;
    extern bool ignoreReqVers;
    extern bool validateNCAs;
    extern bool overClock;
    extern bool deletePrompt;
    extern bool autoUpdate;
    extern bool gayMode;
    extern bool usbAck;

    void setConfig();
    void parseConfig();
} // namespace inst::config