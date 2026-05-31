#include "../include/dashboard.h"

#include <ncurses.h>

void Dashboard::initialize() {

    initscr();

    noecho();

    curs_set(0);
}

void Dashboard::render(
    float cpu,
    float memory,
    float disk
) {

    clear();

    mvprintw(2, 5, "InfraPulse Dashboard");

    mvprintw(4, 5, "CPU Usage: %.2f%%", cpu);

    mvprintw(5, 5, "Memory Usage: %.2f%%", memory);

    mvprintw(6, 5, "Disk Usage: %.2f%%", disk);

    refresh();
}

void Dashboard::cleanup() {

    endwin();
}