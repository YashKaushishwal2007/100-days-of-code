#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[200];
    int maxLen = 0, currLen = 0, start = 0, i;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            if (currLen > maxLen) {
                maxLen = currLen;
                strncpy(longest, &str[start], currLen);
                longest[currLen] = '\0';
            }
            currLen = 0;
            start = i + 1;
        } else {
            currLen++;
        }

        if (str[i] == '\0')
            break;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}

