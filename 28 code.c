#include <stdio.h>

int main() {
    
    unsigned int n;
    
    
    unsigned int power;

    printf("Enter a non-negative integer: ");
    scanf("%u", &n);


    if (n == 0) {
        printf("Binary representation of 0 is: 0\n");
        return 0; 
    }
    power = 1;
    
    while (power <= n / 2) {
        power *= 2; 
    }



    printf("Binary representation of %u is: ", n);


    while (power > 0) {
        
        if (n >= power) {
            
            printf("1");
        
            n = n - power; 
        } else {
            
            printf("0");
        }
        
        
        power /= 2; 
    }
    
    printf("\n"); 

    return 0;
}