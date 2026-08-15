#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double simple_interest, compound_interest, amount;
    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    printf("Enter annual interest rate (in %%): ");
    scanf("%lf", &rate);
    printf("Enter time period (in years): ");
    scanf("%lf", &time);
    amount = principal * pow((1 + rate / 100.0), time);
    compound_interest = amount - principal;
    printf("\n--- Results ---\n");
    printf("Simple Interest: %.2lf\n", simple_interest);
    printf("Compound Interest: %.2lf\n", compound_interest);
    printf("Total Amount (with Compound Interest): %.2lf\n", amount);

    return 0;
}
