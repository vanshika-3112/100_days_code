#include <stdio.h>

int main() {
    int n;
    double series_sum = 0.0;
    double numerator = 1.0, denominator = 2.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        series_sum += numerator / denominator;
        numerator += 2.0;
        denominator += 2.0;
    }

    printf("The sum of the series up to %d terms is: %.4f\n", n, series_sum);

    return 0;
}
