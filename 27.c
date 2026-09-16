#include <stdio.h>

int main() {
    int total_rows = 9;
    int mid_row = 5;

    for (int i = 1; i <= total_rows; i++) {
        // Calculate the number of stars for the current row
        int stars;
        if (i <= mid_row) {
            stars = 2 * i - 1;
        } else {
            stars = 2 * (total_rows - i + 1) - 1;
        }

        // Print the stars for the current row
        for (int j = 1; j <= stars; j++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
