#include <stdio.h>

int main() {
    double num1, num2, sum;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    sum = num1 + num2;

    printf("Sum: %.2lf\n", sum);

    return 0;
}
