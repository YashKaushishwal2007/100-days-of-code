#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    for(int i = 0; str[i]; i++){
        str[i] = tolower(str[i]);
    }

    
    if(isalpha(str[0])) {
        str[0] = toupper(str[0]);
    }

    printf("Sentence case: %s", str);

    return 0;
}
