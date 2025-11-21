#include <stdio.h>

int main() {
    int i, j;
    int size = 5; 

    printf("Pattern:\n");

    
    for (i = 1; i <= size; i++) {
        
        for (j = 1; j <= size; j++) {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}