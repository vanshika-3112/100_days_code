#include <stdio.h>

int main() {
    double side1, side2, side3;
    
    printf("Enter three sides of the triangle: ");
    if (scanf("%lf %lf %lf", &side1, &side2, &side3) != 3) {
        printf("Invalid input.\n");
        return 1;
    }
    if ((side1 + side2 <= side3) || (side1 + side3 <= side2) || (side2 + side3 <= side1)) {
        printf("The given sides do not form a valid triangle.\n");
    } 
    else if (side1 == side2 && side2 == side3) {
        printf("Equilateral triangle\n");
    } 
    else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("Isosceles triangle\n");
    } 
    else {
        printf("Scalene triangle\n");
    }

    return 0;
}
