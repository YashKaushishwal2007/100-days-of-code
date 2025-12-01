

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input, *output;
    char ch;

    
    input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Error: input.txt not found!\n");
        return 1;
    }

    
    output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Error: Unable to create output.txt!\n");
        fclose(input);
        return 1;
    }

    
    while ((ch = fgetc(input)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);
        fputc(ch, output);
    }

    printf("Conversion successful! Check output.txt\n");

    
    fclose(input);
    fclose(output);

    return 0;
}
