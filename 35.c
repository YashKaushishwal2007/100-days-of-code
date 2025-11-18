#include <stdio.h>
#include <math.h> 

int main() {
    int n, i;

    
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }
    
    printf("Factors of %d are: ", n);


    int limit = (int)sqrt(n);
    
    for (i = 1; i <= limit; i++) {
        if (n % i == 0) {
            
            printf("%d ", i);
        }
    }

    
    for (i = limit; i >= 1; i--) {
        if (n % i == 0) {
            
            int secondFactor = n / i;
            
        
            if (secondFactor != i) {
                printf("%d ", secondFactor);
            }
        }
    }

    printf("\n");

    return 0;
}