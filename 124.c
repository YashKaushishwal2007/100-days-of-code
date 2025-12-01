#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    file = fopen("info.txt", "r");  

    if (file == NULL) {
        printf("Error: File not found!\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;

        
        if (ch == '\n')
            lines++;

        
        if (!isspace(ch) && inWord == 0) {
            inWord = 1;
            words++;
        }
        else if (isspace(ch)) {
            inWord = 0;
        }
    }

    fclose(file);

    
    if (characters > 0 && ch != '\n')
        lines++;

    printf("Total Characters: %d\n", characters);
    printf("Total Words: %d\n", words);
    printf("Total Lines: %d\n", lines);

    return 0;
}
