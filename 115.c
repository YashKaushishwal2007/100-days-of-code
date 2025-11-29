#include <stdio.h>
#include <string.h>

#define CHAR_SET 256  

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int lastIndex[CHAR_SET];  
    for (int i = 0; i < CHAR_SET; i++)
        lastIndex[i] = -1;

    int maxLen = 0, start = 0;

    for (int i = 0; i < n; i++) {
        
        if (lastIndex[(unsigned char)s[i]] >= start)
            start = lastIndex[(unsigned char)s[i]] + 1;

        
        lastIndex[(unsigned char)s[i]] = i;

        
        if (i - start + 1 > maxLen)
            maxLen = i - start + 1;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);
    return 0;
}
