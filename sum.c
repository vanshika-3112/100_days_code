#include <stdio.h>

int main(void) {
    int a;
    int b;
    int sum;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    sum = a+b;
    int diff = a-b;
    printf("%d\n", sum);
    printf("%d\n", diff);

    return 0;
}