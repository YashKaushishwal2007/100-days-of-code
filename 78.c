#include <stdio.h>

int main() {
    int a[10][10], r, i, j;
    int distinct = 1;

    
    printf("Enter order of the matrix (n for n x n): ");
    scanf("%d", &r);

    
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    for (i = 0; i < r; i++) {
        for (j = i + 1; j < r; j++) {
            if (a[i][i] == a[j][j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct) break;
    }

    
    if (distinct)
        printf("\nAll diagonal elements are distinct.\n");
    else
        printf("\nDiagonal elements are NOT distinct.\n");

    return 0;
}
