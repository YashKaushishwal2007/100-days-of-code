#include <stdio.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    enum TrafficLight light;
    
    
    light = RED;

    if (light == RED)
        printf("Stop\n");
    else if (light == YELLOW)
        printf("Wait\n");
    else if (light == GREEN)
        printf("Go\n");
    else
        printf("Invalid Traffic Light\n");

    return 0;
}
