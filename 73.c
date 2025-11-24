#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j;
    int sum = 0;

    
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);


    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];  
        }
    }

    

    printf("\nSum of all elements = %d\n", sum);

    return 0;
}
