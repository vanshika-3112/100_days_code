#include <stdio.h>

int main() {
    int num1, num2, n1, n2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    n1 = num1;
    n2 = num2;
    while (n1 != n2) {
        if (n1 > n2) {
            n1 = n1 - n2;
        } else {
            n2 = n2 - n1;
        }
    }
    printf("HCF (GCD) of %d and %d is: %d\n", num1, num2, n1);

    return 0;
}
