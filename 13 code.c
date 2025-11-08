#include<stdio.h>

int main()
{

    int rows;
    int coloums;
    char symbol;

    printf("enter the number of rows:");
    scanf("%d",&rows);

    printf("enter the number of coloum:");
    scanf("%d",&coloums);

    scanf ("%c");
    printf("eneter the number symbol:");
    scanf("%c",&symbol);

    for( int i=1;i<=rows;i++)
    {
        for
            (int j=1;j<=coloums;j++)
            {
        printf("%c",symbol);
    }
printf("\n");
    }

return 0;
} 