#include <stdio.h>
int main(){
    int celcius;
    printf("Enter the temperature in Celsius: ");
    scanf("%d",&celcius);
    float fahrenheit = (celcius * 9/5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n",fahrenheit);
    return 0;
}