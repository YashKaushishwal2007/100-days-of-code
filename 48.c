#include <stdio.h>

int main() {
    int i, j, k;
    int max_val = 5;

    printf("Pattern:\n");

    
    for (i = max_val; i >= 1; i--) {
        
        
    
        for (k = 1; k < i; k++) {
            printf(" ");
        }

        
        for (j = i; j <= max_val; j++) {
            printf("%d", j);
        }

        
        printf("\n");
    }

    return 0;
}