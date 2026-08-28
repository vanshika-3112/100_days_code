#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 0) {
        printf("0\n");
        return 0;
    }

    int place = 1;
    while (place <= num / 2) {
        place *= 2;
    }
    while (place > 0) {
        if (num >= place) {
            printf("1");
            num -= place;
        } else {
            printf("0");
        }
        place /= 2;
    }
    printf("\n");

    return 0;
}
