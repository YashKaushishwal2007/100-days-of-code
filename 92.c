#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0}; // To store frequency of lowercase letters
    char result = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;

            if (freq[str[i] - 'a'] == 2) { 

                result = str[i];
                break;
            }
        }
    }

    if (result != '\0')
        printf("First repeating lowercase alphabet: %c\n", result);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
