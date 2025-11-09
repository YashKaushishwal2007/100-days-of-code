#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int i; 
    int currentOdd = 1; 

    
    printf("Enter the value of n (how many odd numbers to sum): ");
    scanf("%d", &n);

    
    for (i = 1; i <= n; i++) {
        
        sum += currentOdd;
        
        
        currentOdd += 2;
    }

    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}