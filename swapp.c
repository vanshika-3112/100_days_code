#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the numbers a and b ");
    scanf("%d",&a);//10
    scanf("%d",&b);//20
    a = a+b;// 10+20 = 30
    b = a-b;//30-20=10;
    a = a-b;//30-10=20;
    printf("%d",a);
    printf("%d",b);
    return 0;
}
