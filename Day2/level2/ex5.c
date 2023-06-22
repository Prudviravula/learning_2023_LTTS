#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* encode_string(const char* string) {
    int length = strlen(string);

    char* encoded = (char*)malloc((length + 1) * sizeof(char));
    if (encoded == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    for (int i = 0; i < length; i++) {
        encoded[i] = string[i] + 1;
    }
    encoded[length] = '\0';

    return encoded;
}

char* decode_string(const char* encoded) {
    int length = strlen(encoded);

    char* decoded = (char*)malloc((length + 1) * sizeof(char));
    if (decoded == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    for (int i = 0; i < length; i++) {
        decoded[i] = encoded[i] - 1;
    }
    decoded[length] = '\0';

    return decoded;
}

int main() {
    char input[100];
    printf("Enter a string: ");
    if (fgets(input, sizeof(input), stdin) == NULL) {
        printf("Failed to read input.\n");
        return 1;
    }

    input[strcspn(input, "\n")] = '\0';

    char* encoded_string = encode_string(input);
    if (encoded_string == NULL) {
        return 1;
    }

    char* decoded_string = decode_string(encoded_string);
    if (decoded_string == NULL) {
        free(encoded_string);
        return 1;
    }

    printf("Original String: %s\n", input);
    printf("Encoded String: %s\n", encoded_string);
    printf("Decoded String: %s\n", decoded_string);

    free(encoded_string);
    free(decoded_string);

    return 0;
}
