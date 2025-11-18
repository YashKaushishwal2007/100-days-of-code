include <stdio.h>
#include <math.h>

int main() {
    int n, originalN, remainder, result = 0, digits = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalN = n;

    

    int temp = n;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    
    n = originalN;

    
    while (n != 0) {
        remainder = n % 10;
        
    
        int power = 1;
        for(int i = 0; i < digits; i++) {
            power *= remainder;
        }
        
        result += power;
        n /= 10;
    }

    if (result == originalN)
        printf("%d is an Armstrong number.\n", originalN);
    else
        printf("%d is not an Armstrong number.\n", originalN);

    return 0;
}