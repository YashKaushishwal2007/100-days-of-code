#include <stdio.h>

int main() {
    int n, originalN, reversedN = 0, remainder;

    
    printf("Enter an integer: ");
    scanf("%d", &n);


    originalN = n;

    
    while (n != 0) {
        remainder = n % 10;             
        reversedN = reversedN * 10 + remainder; 
        n /= 10;                        
    }

    
    if (originalN == reversedN) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}