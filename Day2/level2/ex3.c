#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sortNames(char *names[], int count) {
    char *temp;
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
}

int main() {
    int element;
    printf("Enter the number of names in the array: ");
    if (scanf("%d", &element) != 1 || element <= 0) {
        printf("Invalid number of names. Please enter a positive integer.\n");
        return 1;
    }

    char** names = (char**)malloc(element * sizeof(char*));
    if (names == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the names:\n");
    for (int i = 0; i < element; i++) {
        char temp[50];
        scanf("%s", temp);
        names[i] = strdup(temp);
        if (names[i] == NULL) {
            printf("Memory allocation failed.\n");
            // Free memory for already allocated names
            for (int j = 0; j < i; j++) {
                free(names[j]);
            }
            free(names);
            return 1;
        }
    }

    printf("Entered order of names:\n");
    for (int i = 0; i < element; i++) {
        printf("%s\n", names[i]);
    }

    sortNames(names, element);

    printf("\nSorted order of names:\n");
    for (int i = 0; i < element; i++) {
        printf("%s\n", names[i]);
    }

    // Free memory
    for (int i = 0; i < element; i++) {
        free(names[i]);
    }
    free(names);

    return 0;
}
