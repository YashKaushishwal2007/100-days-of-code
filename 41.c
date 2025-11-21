#include <stdio.h>



long long swapFirstAndLast(long long n) {
    
    int is_negative = 0;
    if (n < 0) {
        is_negative = 1;
        n = -n;
    }

    
    if (n < 10) {
        return is_negative ? -n : n;
    }

    
    long long last_digit = n % 10;

    
    long long temp = n;
    long long power_of_10 = 1;
    while (temp >= 10) {
        temp /= 10;
        power_of_10 *= 10;
    }

    
    long long first_digit = n / power_of_10;


    long long middle_part = (n % power_of_10) / 10;


    long long swapped_n = last_digit * power_of_10 + middle_part * 10 + first_digit;
    
    
    return is_negative ? -swapped_n : swapped_n;
}

int main() {
    long long number;

    printf("Enter an integer: ");
    

    if (scanf("%lld", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    long long result = swapFirstAndLast(number);

    printf("\nOriginal Number: %lld\n", number);
    printf("Number after swapping first and last digit: %lld\n", result);

    return 0;
}