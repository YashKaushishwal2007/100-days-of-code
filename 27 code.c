#include <stdio.h>

int main() {
    int n, reversedNumber = 0, remainder;

    
    printf("Enter an integer: ");
    scanf("%d", &n);


    int originalNumber = n;

    
    while (n != 0) {
        
        remainder = n % 10;
        
        
        reversedNumber = reversedNumber * 10 + remainder;
        
        
        n /= 10; 
    }
    

    printf("The reverse of %d is %d\n", originalNumber, reversedNumber);

    return 0;
}