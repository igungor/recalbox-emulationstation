/* 
 * File:   RetroboxSystem.h
 * Author: matthieu
 *
 * Created on 29 novembre 2014, 03:15
 */

#ifndef RETROBOXSYSTEM_H
#define	RETROBOXSYSTEM_H
#include <string>
#include "Window.h"


class RecalboxSystem {
public:
    
    
    static RecalboxSystem * getInstance();

    unsigned long getFreeSpaceGB(std::string mountpoint);
    std::string getFreeSpaceInfo();
    bool isFreeSpaceLimit();
    bool setAudioOutputDevice(std::string device);
    bool setOverscan(bool enable);
    bool setOverclock(std::string mode);
    bool ping();
    bool enableWifi(std::string ssid, std::string key);
    bool disableWifi();
    std::string getRecalboxConfig(std::string key);
    bool setRecalboxConfig(std::string key, std::string value);
    bool reboot();
    bool shutdown();
    std::string getIpAdress();


private:
    static RecalboxSystem * instance;
    RecalboxSystem();

};

#endif	/* RETROBOXSYSTEM_Hm */

