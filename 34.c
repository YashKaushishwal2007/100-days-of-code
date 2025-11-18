#include <stdio.h>

int main() {
    int n, i;

    int isPrime = 1; 

    printf("Enter an integer: ");
    scanf("%d", &n);

    
    if (n <= 1) {
        isPrime = 0; 
    } 
    
    else if (n == 2) {
        isPrime = 1; 
    }
    
    else if (n % 2 == 0) {
        isPrime = 0; // 
    } 
    else {
        
        for (i = 3; i * i <= n; i += 2) {
        
            if (n % i == 0) {
                isPrime = 0; 
                break; 
            }
        }
    }

    
    if (isPrime) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }

    return 0;
}