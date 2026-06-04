#include "../include/log_monitor.h"

#include <fstream>
#include <iostream>

void LogMonitor::monitorLogs() {

    std::ifstream file("/var/log/syslog");

    std::string line;

    while (getline(file, line)) {

        if (
            line.find("ERROR") != std::string::npos
        ) {

            std::cout << "[ALERT] "
                      << line
                      << std::endl;
        }
    }
}