#include <stdio.h>



intfactorial(int n) {
    int fact = 1;
    
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}


 
int isStrong(int n) {
    if (n < 0) return 0;
    if (n == 0) return 0; 

    int original_n = n;
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;      
        sum += factorial(digit); 
        n /= 10;                 
    }

    return (sum == original_n);
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (isStrong(number)) {
        printf("%d is a Strong Number.\n", number);
    } else {
        printf("%d is NOT a Strong Number.\n", number);
    }

    return 0;
}