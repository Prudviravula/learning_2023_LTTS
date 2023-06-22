#include <stdio.h>

void swapalt(int arr[], int length) {
    int temp = length / 3;
    int j = 0;
    
    for (int i = 0; i < temp; i++) {
        int temp = arr[j];
        arr[j] = arr[j + 2];
        arr[j + 2] = temp;
        j += 3;
    }
}

int main() {
    int length;
    
    printf("Enter the length of the array: ");
    if (scanf("%d", &length) != 1 || length <= 0) {
        printf("Invalid length. Please enter a positive integer.\n");
        return 1;
    }
    
    int arr[length];
    
    printf("Enter the elements in the array: ");
    for (int i = 0; i < length; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
    }
    
    printf("\nOriginal Array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    
    swapalt(arr, length);
    
    printf("\nModified Array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
