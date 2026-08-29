#include <stdio.h>

int main() {
    char ch;
    printf("Enter a binary number: ");
    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (ch == '0') {
            printf("1");
        } else if (ch == '1') {
            printf("0");
        }
    }
    printf("\n");
    return 0;
}
