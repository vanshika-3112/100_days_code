#include <stdio.h>

int main() {
    int num, divisor_sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            divisor_sum += i;
        }
    }

    if (divisor_sum == num && num > 0) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
