#ifndef DASHBOARD_H
#define DASHBOARD_H

class Dashboard {

    public:
        void initialize();

        void render(
            float cpu,
            float memory,
            float disk
        );

        void cleanup();
};

#endif