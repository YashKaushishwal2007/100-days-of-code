#include <stdio.h>

int main() {
    int a[10][10], n, i, j, start;

    
    printf("Enter order of the matrix (n x n): ");
    scanf("%d", &n);

    
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nDiagonal Traversal:\n");

    
    for (start = 0; start < n; start++) {
        i = 0;
        j = start;
        while (j >= 0 && i < n) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    
    for (start = 1; start < n; start++) {
        i = start;
        j = n - 1;
        while (i < n && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}
