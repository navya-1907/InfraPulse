#include <iostream>
#include <thread>
#include <chrono>

#include "../include/cpu_monitor.h"

int main() {

    CpuMonitor cpu;

    while (true) {

        float cpuUsage = cpu.getCpuUsage();

        std::cout << "CPU Usage: " << cpuUsage << "%" << std::endl;

        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}