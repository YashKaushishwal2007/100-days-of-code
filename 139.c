#include <stdio.h>

enum Colors { RED, GREEN, BLUE, YELLOW, ORANGE };

int main() {
    enum Colors c;

    printf("Enum Names and Values:\n");
    for (c = RED; c <= ORANGE; c++) {
        switch (c) {
            case RED:    printf("RED = %d\n", c); break;
            case GREEN:  printf("GREEN = %d\n", c); break;
            case BLUE:   printf("BLUE = %d\n", c); break;
            case YELLOW: printf("YELLOW = %d\n", c); break;
            case ORANGE: printf("ORANGE = %d\n", c); break;
        }
    }

    return 0;
}
