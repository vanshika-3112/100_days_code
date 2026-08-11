#include<stdio.h>
   int main(){
    int b,l;
    printf("Insert the value of length and height of rectangle: ");
    scanf("%d%d",&l,&b);
    int area = l*b;
    printf("Area of rectangle is: %d",area);
    int perimeter = 2*(l+b);
    printf("Perimeter of rectangle is: %d",perimeter);
return 0;
  }
