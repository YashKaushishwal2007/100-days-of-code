#include <stdio.h>
#include <math.h> 

int main() {
    double principal, rate, time;
    double simple_interest, compound_interest;


    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (e.g., 5 for 5%%): ");
    scanf("%lf", &rate);

    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    
    simple_interest = (principal * rate * time) / 100;

    
    double amount = principal * pow((1 + rate / 100), time);
    compound_interest = amount - principal;

    
    printf("\n--- Results ---\n");
    printf("Principal Amount:   %.2f\n", principal);
    printf("Interest Rate:      %.2f %%\n", rate);
    printf("Time (Years):       %.2f\n", time);
    printf("--------------------------------\n");
    printf("Simple Interest:    %.2f\n", simple_interest);
    printf("Compound Interest:  %.2f\n", compound_interest);

    return 0;
}