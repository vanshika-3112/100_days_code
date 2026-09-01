#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    
    double sum = 0.0;
    int numerator = 2;
    int denominator = 3;
    
    for (int i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;
        denominator += 4;
    }
    
    printf("The sum of the series is: %.6f\n", sum);
    return 0;
}
