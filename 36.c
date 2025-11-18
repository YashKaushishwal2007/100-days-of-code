#include <stdio.h>

int main() {
    int a, b;
    int temp, remainder;
    
    
    printf("Enter the first positive integer (a): ");
    scanf("%d", &a);
    printf("Enter the second positive integer (b): ");
    scanf("%d", &b);

    
    if (a <= 0 || b <= 0) {
        printf("Please enter two positive integers.\n");
        return 1;
    
    temp = a;
    

    while (b != 0) {
        
        remainder = temp % b;
        
        
    
        temp = b;
        
    }


    printf("The HCF (GCD) of the two numbers is: %d\n", temp);
    }
    return 0;
}