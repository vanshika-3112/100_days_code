#include <stdio.h>
int main(){
    int r;
    printf("Insert the value of radius of circle: ");
    scanf("%d",&r);
    float area = 3.14*r*r;
    printf("Area of circle is: %f",area);
    float perimeter = 2*3.14*r;
    printf("Perimeter of circle is: %f",perimeter);
    return 0;
}