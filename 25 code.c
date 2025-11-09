#include <stdio.h>

int main() {
    int n;

    unsigned long long product = 1; 
    int i; 
    printf("Enter the value of n: ");
    scanf("%d", &n);


    if (n < 2) {
        printf("There are no even numbers between 1 and %d.\n", n);
        
        printf("Product: 1\n"); 
    } else {
        
        for (i = 2; i <= n; i += 2) {
            product *= i; 
        }

        
        printf("The product of even numbers from 1 to %d is: %llu\n", n, product);
    }

    return 0;
}