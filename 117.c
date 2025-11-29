#include <stdio.h>
#include <string.h>

#define CHAR_SET 26  // lowercase letters a-z

int main() {
    char s[1000], t[1000];
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);

    int lenS = strlen(s), lenT = strlen(t);

    if (lenS != lenT) {
        printf("Not Anagram\n");
        return 0;
    }

    int freqS[CHAR_SET] = {0};
    int freqT[CHAR_SET] = {0};


    for (int i = 0; i < lenS; i++) {
        freqS[s[i] - 'a']++;
        freqT[t[i] - 'a']++;
    }

    
    for (int i = 0; i < CHAR_SET; i++) {
        if (freqS[i] != freqT[i]) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
