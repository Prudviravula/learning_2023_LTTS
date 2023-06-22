#include <stdio.h>

int findGreater(int num1, int num2, int num3) {
    if (num1 >= num2) {
        if (num1 >= num3) {
            return num1;
        } else {
            return num3;
        }
    } else if (num2 >= num3) {
        return num2;
    } else {
        return num3;
    }
}

int main() {
    int number1, number2, number3;
    
    printf("Enter the First number: ");
    scanf("%d", &number1);
    printf("Enter the Second number: ");
    scanf("%d", &number2);
    printf("Enter the Third number: ");
    scanf("%d", &number3);
    
    int result = findGreater(number1, number2, number3);
    printf("The greater number is: %d", result);
    
    return 0;
}
