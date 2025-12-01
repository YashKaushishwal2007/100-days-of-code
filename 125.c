#include <stdio.h>

int main() {
    FILE *src, *dest;
    char sourceFile[100], destFile[100];
    int ch;

    // Taking filenames from user
    printf("Enter source file name: ");
    scanf("%s", sourceFile);

    printf("Enter destination file name: ");
    scanf("%s", destFile);

    
    src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error: Unable to open the source file!\n");
        return 1;
    }

    
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Unable to create destination file!\n");
        fclose(src);
        return 1;
    }

    
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully!\n");

    
    fclose(src);
    fclose(dest);

    return 0;
}
