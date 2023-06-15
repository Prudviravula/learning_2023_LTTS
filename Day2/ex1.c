#include <stdio.h>

void print_exponent(double x) {
    unsigned long long *ptr = (unsigned long long *)&x;
    unsigned long long exponent = (*ptr >> 52) & 0x7FF;
    printf("Exponent (Hex): 0x%llX\n", exponent);
    
    int i;
    printf("Exponent (Binary): 0b");
    for (i = 11; i >= 0; i--) {
        int bit = (exponent >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    print_exponent(x);
    
    return 0;
}
