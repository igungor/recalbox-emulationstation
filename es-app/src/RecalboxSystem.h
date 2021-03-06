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
    std::string getVersion();
    bool setAudioOutputDevice(std::string device);
    bool setOverscan(bool enable);
    bool setOverclock(std::string mode);
    bool createLastVersionFileIfNotExisting();
    bool updateLastVersionFile();
    bool needToShowVersionMessage();
    std::string getVersionMessage();
    bool updateSystem();
    bool ping();
    bool canUpdate();
    bool launchKodi(Window * window);
    bool enableWifi(std::string ssid, std::string key);
    bool disableWifi();
    bool reboot();
    bool shutdown();
    std::string getIpAdress();


    std::vector<std::string> * scanBluetooth();

    bool pairBluetooth(std::string &basic_string);

    std::vector<std::string> getAvailableStorageDevices();

    std::string getCurrentStorage();

    bool setStorage(std::string basic_string);

    bool forgetBluetoothControllers();

private:
    static RecalboxSystem * instance;
    RecalboxSystem();

};

#endif	/* RETROBOXSYSTEM_Hm */

