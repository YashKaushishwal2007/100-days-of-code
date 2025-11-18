#include <stdio.h>

int main() {
    int n, originalN, sum = 0, remainder;

    
    printf("Enter an integer: ");
    scanf("%d", &n);

    
    originalN = n;

    /
        n = -n;

    
    
    while (n != 0) {
        remainder = n % 10;       
        sum += remainder;         
        n /= 10;                  
    }

    printf("The sum of the digits of %d is: %d\n", originalN, sum);

    return 0;
}