#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter the number of terms (n): ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    printf("Series: ");
    for (int i = 1; i <= n; i++) {
        double term;

        
        if (i == 1) {
            term = 1.0;
            printf("1");
        } else {
            

            double numerator = 2 * i - 1;
            double denominator = 2 * i;
            term = numerator / denominator;
            
            printf(" + %.0f/%.0f", numerator, denominator);
        }

        sum += term;
    }

    printf("\nSum of the series up to %d terms is: %.6f\n", n, sum);

    return 0;
}