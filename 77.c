#include <stdio.h>

int main() {
    int a[10][10], r, i, j, symmetric = 1;

    
    printf("Enter order of the matrix (n for n x n): ");
    scanf("%d", &r);

    
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            if (a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if (!symmetric) break;
    }

    
    if (symmetric)
        printf("\nThe matrix is symmetric.\n");
    else
        printf("\nThe matrix is not symmetric.\n");

    return 0;
}
