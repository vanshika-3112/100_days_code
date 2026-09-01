#include <stdio.h>
#include <math.h>

int main() {
    int num, first_digit, last_digit, middle, digits = 0, temp, swapped_num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 10 && num >= 0) {
        printf("Swapped number: %d\n", num);
    } else {
        last_digit = num % 10;
        
        // Find the first digit and count power of 10
        temp = num;
        while (temp >= 10) {
            temp /= 10;
            digits++;
        }
        first_digit = temp;
        
        int multiplier = pow(10, digits);
        
        // Isolate the middle digits
        middle = (num % multiplier) / 10;
        
        // Reconstruct the swapped number
        swapped_num = (last_digit * multiplier) + (middle * 10) + first_digit;
        printf("Swapped number: %d\n", swapped_num);
    }

    return 0;
}
