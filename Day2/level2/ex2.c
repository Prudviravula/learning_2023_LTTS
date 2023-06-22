#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int isequal(int arr1[], int arr2[], int length) {
    for (int i = 0; i < length; i++) {
        if (arr1[i] != arr2[i]) {
            return 0; // Arrays are not equal
        }
    }
    return 1; // Arrays are equal
}

int main() {
    int length;
    printf("Enter the length of the arrays: ");
    if (scanf("%d", &length) != 1 || length <= 0) {
        printf("Invalid length. Please enter a positive integer.\n");
        return 1;
    }

    int* arr1 = (int*)malloc(length * sizeof(int));
    int* arr2 = (int*)malloc(length * sizeof(int));

    printf("Enter the elements of the first array: ");
    for (int i = 0; i < length; i++) {
        if (scanf("%d", &arr1[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            free(arr1);
            free(arr2);
            return 1;
        }
    }

    printf("Enter the elements of the second array: ");
    for (int i = 0; i < length; i++) {
        if (scanf("%d", &arr2[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            free(arr1);
            free(arr2);
            return 1;
        }
    }

    qsort(arr1, length, sizeof(int), cmpfunc);
    qsort(arr2, length, sizeof(int), cmpfunc);

    if (isequal(arr1, arr2, length) == 0) {
        printf("Both arrays do not have equal elements.\n");
    } else {
        printf("Both arrays have equal elements.\n");
    }

    free(arr1);
    free(arr2);

    return 0;
}
