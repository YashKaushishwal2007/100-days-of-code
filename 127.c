#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;

    
    printf("Enter the filename: ");
    scanf("%s", filename);

    
    file = fopen(filename, "r");

    
    if (file == NULL) {
        printf("Error: File does not exist or cannot be opened!\n");
        return 1;
    }

    
    printf("\n----- File Content -----\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    
    fclose(file);

    return 0;
}
