#include <stdio.h>

int main() {
    int n;
    long long product = 1; 
    int has_even = 0;     
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            product *= i;
            has_even = 1;
        }
    }
    if (has_even) {
        printf("Product of even numbers from 1 to %d is: %lld\n", n, product);
    } else {
        printf("No even numbers in the range from 1 to %d.\n", n);
    }
    
    return 0;
}
