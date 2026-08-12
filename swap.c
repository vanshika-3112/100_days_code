#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Before swapping: a = %d, b = %d\n",a,b);
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n",a,b);
    return 0;
}