#include <stdio.h>

int determineCharacterType(char c) {
    if (c >= 65 && c <= 90) {
        return 1;
    } else if (c >= 97 && c <= 122) {
        return 2;
    } else if (c >= 48 && c <= 57) {
        return 3;
    } else if (c >= 32 && c <= 126) {
        return 4;
    } else {
        return 5;
    }
}

int main() {
    char character;
    
    printf("Enter a character: ");
    scanf("%c", &character);
    
    int type = determineCharacterType((int)character);
    
    printf("Character type: %d\n", type);
    
    return 0;
}
