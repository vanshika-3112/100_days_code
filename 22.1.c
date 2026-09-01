#include <stdio.h>

int main() {
    int num, temp, digit, total_factorial_sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        
        // Calculate factorial
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        
        total_factorial_sum += fact;
        temp /= 10;
    }

    if (total_factorial_sum == num) {
        printf("%d is a strong number.\n", num);
    } else {
        printf("%d is not a strong number.\n", num);
    }

    return 0;
}
