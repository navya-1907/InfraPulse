#include "../include/docker_monitor.h"

#include <cstdio>
#include <iostream>

void DockerMonitor::showContainers() {

    FILE* pipe = popen("docker ps", "r");

    char buffer[256];

    while (fgets(buffer, sizeof(buffer), pipe) != NULL) {

        std::cout << buffer;
    }

    pclose(pipe);
}