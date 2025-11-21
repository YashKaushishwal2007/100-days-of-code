#include <stdio.h>


int main() {
    int i, j;
    int max_val = 5;

    printf("Pattern:\n");

    
    for (i = max_val; i >= 1; i--) {
        
    
        for (j = i; j <= max_val; j++) {
            printf("%d", j);
        }
        
        
        printf("\n");
    }

    return 0;
}