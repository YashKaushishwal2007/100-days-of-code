#include <stdio.h>

 
void find_ones_complement(int n) {
    if (n == 0) {
        
        printf("0");
        return;
    }

    int temp = n;
    int divisor = 1;

    
    while (temp > 9) {
        temp /= 10;
        divisor *= 10;
    }

    printf("1's Complement: ");

    
    while (divisor >= 1) {
        
        int digit = n / divisor;

        
        int flipped_digit = 1 - digit;

        

        printf("%d", flipped_digit);

        
        n %= divisor;

        
        divisor /= 10;
    }

    printf("\n");
}

int main() {
    int input1 = 1010;
    find_ones_complement(input1);

    int input2 = 1111;
    find_ones_complement(input2);

    int input3 = 10010;
    find_ones_complement(input3);

    return 0;
}