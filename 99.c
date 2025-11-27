#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[200];
    char *words[20];
    int count = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    
    name[strcspn(name, "\n")] = '\0';

    
    char *token = strtok(name, " ");
    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }

    
    for (int i = 0; i < count - 1; i++) {
        printf("%c. ", toupper(words[i][0]));
    
    }
    if (count > 0)
        printf("%s\n", words[count - 1]);

    return 0;
}
