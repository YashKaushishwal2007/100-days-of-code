#include <stdio.h>

int main() {
    int a[10][10], n, i, j;
    int sum = 0;

    
    printf("Enter order of the square matrix (n x n): ");
    scanf("%d", &n);

    
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    for (i = 0; i < n; i++) {
        sum += a[i][i];
    }

    
    printf("\nSum of main diagonal elements = %d\n", sum);

    return 0;
}
