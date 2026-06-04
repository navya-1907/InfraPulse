#include "../include/process_monitor.h"

#include <dirent.h>
#include <fstream>

std::vector<ProcessInfo> ProcessMonitor::getProcesses() {

    std::vector<ProcessInfo> processes;

    DIR* proc = opendir("/proc");

    struct dirent* entry;

    while ((entry = readdir(proc)) != NULL) {

        if (entry->d_type == DT_DIR) {

            std::string pid = entry->d_name;

            if (isdigit(pid[0])) {

                std::ifstream file("/proc/" + pid + "/comm");

                std::string name;

                getline(file, name);

                processes.push_back(
                    {
                        stoi(pid),
                        name
                    }
                );
            }
        }
    }

    closedir(proc);

    return processes;
}