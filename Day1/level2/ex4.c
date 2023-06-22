#include <stdio.h>

int performOperation(int num, int oper, int pos) {
    int result;
    
    switch (oper) {
        case 1:
            result = num | (0x3 << pos);
            break;
        case 2:
            result = num & ~(0x7 << pos);
            break;
        case 3:
            result = num ^ (1 << 31);
            break;
        default:
            printf("Invalid operation type.\n");
            break;
    }
    
    return result;
}

int main() {
    int num = 5;
    int oper = 2;
    int pos;
    
    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);
    printf("Enter the bit position: ");
    scanf("%d", &pos);
    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &oper);
    
    int result = performOperation(num, oper, pos);
    printf("Result: %d\n", result);
    
    return 0;
}
