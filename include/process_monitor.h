#ifndef PROCESS_MONITOR_H
#define PROCESS_MONITOR_H

#include <vector>
#include <string>

struct ProcessInfo {

    int pid;
    std::string name;
};

class ProcessMonitor {

    public:
        std::vector<ProcessInfo> getProcesses();
};

#endif