#include <stdio.h>

int main() {
    int n1, n2;
    int a, b; 
    long long lcm; 
    int gcd;
    int temp, remainder;
    
    
    printf("Enter the first positive integer (n1): ");
    scanf("%d", &n1);
    printf("Enter the second positive integer (n2): ");
    scanf("%d", &n2);

    
    if (n1 <= 0 || n2 <= 0) {
        printf("Please enter two positive integers.\n");
        return 1;
    }


    a = n1;
    b = n2;

    
    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }
    
    
    gcd = a;
    

    lcm = ((long long)n1 / gcd) * n2;
    
    
    printf("The LCM of %d and %d is: %lld\n", n1, n2, lcm);

    return 0;
}