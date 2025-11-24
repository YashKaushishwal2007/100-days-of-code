#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j;
    int rowSum[10];

    
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        rowSum[i] = 0;
        for (j = 0; j < c; j++) {
            rowSum[i] += a[i][j];
        }
    }

    
    printf("\nSum of each row:\n");
    for (i = 0; i < r; i++) {
        printf("Row %d = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
