#include <stdio.h>
int main(){
float s;
float l,b;
float len, base;
float r ;
    printf("Enter length and breadth of the rectangle ");
    scanf("%f %f",&l,&b);
    printf("Enter side of the square ");
    scanf("%f",&s);
    printf("Enter height and base of the triangle ");
    scanf("%f %f",&len,&base);
    printf("Enter radius ");
    scanf("%f",&r);
    float circle= 3.14*r*r;
    float rect= l*b;
    float sq= s*s;
    float tri = 0.5*len*base;

    printf("Triangle %f\n",tri);
    printf("Circle %f\n",circle);
    printf("Rectangle %f\n",rect);
    printf("Square %f\n",sq);
    return 0;
}