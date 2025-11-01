#include <stdio.h>

int main() {
    int a, b;

    // Get input from the user
    printf("Enter first number (a): ");
    scanf("%d", &a);
    printf("Enter second number (b): ");
    scanf("%d", &b);

    printf("\n--- Before Swap ---\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Swapping logic using Bitwise XOR (^)
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("\n--- After Swap ---\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}