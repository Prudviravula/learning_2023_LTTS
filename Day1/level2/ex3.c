#include <stdio.h>

int checkVowel(char c) {
    int isVowel = 0;
    
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            isVowel = 1;
            break;
        default:
            isVowel = 0;
    }
    
    return isVowel;
}

int main() {
    char letter;
    printf("Enter a letter to check if it is a vowel or not: ");
    scanf("%c", &letter);
    int result = checkVowel(letter);
    
    if (result == 1) {
        printf("The letter is a vowel.\n");
    } else {
        printf("The letter is not a vowel.\n");
    }
    
    return 0;
}
