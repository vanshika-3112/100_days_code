#include <stdio.h>

int main() {
    int n, sum = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int odd_number = 2 * i - 1;
        sum += odd_number;
    }
    
    printf("Sum of the first %d odd numbers is: %d\n", n, sum);
    
    return 0;
}
