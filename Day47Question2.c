#include <stdio.h>

int main() {
    char str[200];
    int i, start = 0, len = 0;
    int maxLen = 0, maxStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            len++;
        }
        else {
            if (len > maxLen) {
                maxLen = len;
                maxStart = start;
            }
            len = 0;
            start = i + 1;
        }
    }

    if (len > maxLen) {
        maxLen = len;
        maxStart = start;
    }

    printf("Longest word: ");
    for (i = maxStart; i < maxStart + maxLen; i++) {
        printf("%c", str[i]);
    }

    printf("\nLength: %d", maxLen);

    return 0;
} 