#include <stdio.h>

int main() {
    int num, digit;
    int product = 1;
    int has_odd = 0;
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        return 1;
    }
    if (num < 0) {
        num = -num;
    }
    if (num == 0) {
        printf("Product of odd digits: 0\n");
        return 0;
    }

    while (num > 0) {
        digit = num % 10; 
        if (digit % 2 != 0) { 
            product *= digit;
            has_odd = 1;
        }
        num /= 10; 
    }

    if (has_odd) {
        printf("Product of odd digits: %d\n", product);
    } else {
        printf("Product of odd digits: 0\n");
    }

    return 0;
}
