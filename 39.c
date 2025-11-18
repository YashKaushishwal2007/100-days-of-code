#include <stdio.h>

int main() {
    int n, originalN, remainder;
    
    long long product = 1; 

    
    printf("Enter an integer: ");
    scanf("%d", &n);

    
    originalN = n;

    
    if (n < 0) {
        n = -n;
    }
    

    while (n != 0) {
        remainder = n % 10;       
        
        
        if (remainder % 2 != 0) {
            product *= remainder; 
        }
        
        n /= 10;                  
    }

    printf("The product of the odd digits of %d is: %lld\n", originalN, product);

    return 0;
}