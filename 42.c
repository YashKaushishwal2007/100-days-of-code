#include <stdio.h>



int isPerfect(int n) {
    
    if (n <= 0) {
        return 0;
    }

    int sum = 0;

    
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    
    if (sum == n) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (isPerfect(number)) {
        printf("%d is a Perfect Number.\n", number);
    } else {
        printf("%d is NOT a Perfect Number.\n", number);
    }

    return 0;
}