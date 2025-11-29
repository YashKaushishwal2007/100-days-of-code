#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    int arr[n - 1]; 
    printf("Enter %d elements (numbers from 0 to %d with one missing): ", n - 1, n);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    
    int totalSum = n * (n + 1) / 2;

    
    int actualSum = 0;
    for (int i = 0; i < n - 1; i++) {
        actualSum += arr[i];
    }

    int missing = totalSum - actualSum;
    printf("Missing number: %d\n", missing);

    return 0;
}
