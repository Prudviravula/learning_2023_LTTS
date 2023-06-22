#include <stdio.h>
#include <stdlib.h>

char* xstrchr(char* string, char ch) {
    while (*string != '\0') {
        if (*string == ch) {
            return string;
        }
        string++;
    }
    
    return NULL;
}

int main() {
    int length;
    printf("Enter the string length: ");
    if (scanf("%d", &length) != 1 || length <= 0) {
        printf("Invalid string length. Please enter a positive integer.\n");
        return 1;
    }

    char* str = (char*)malloc((length + 1) * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the string: ");
    scanf("%s", str);

    char chr;
    printf("Enter a character: ");
    scanf(" %c", &chr);

    char* result = xstrchr(str, chr);
    int conc = result != NULL ? result - str + 1 : -1;

    if (result != NULL) {
        printf("\nCharacter '%c' found at position %d.\n", chr, conc);
    } else {
        printf("\nCharacter '%c' not found.\n", chr);
    }
    
    free(str);

    return 0;
}
