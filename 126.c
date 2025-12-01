#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char newText[200];

    
    printf("Enter the file name: ");
    scanf("%s", filename);

    
    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error: Unable to open file!\n");
        return 1;
    }

    
    getchar();

    
    printf("Enter text to append: ");
    fgets(newText, sizeof(newText), stdin);

    
    fputs(newText, file);

    printf("Text successfully appended to the file!\n");

    
    fclose(file);

    return 0;
}
