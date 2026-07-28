#include<stdio.h>
int main ()
{
    float f = 98.6, c;
    c = (f-32.0)*(5.0/9.0);
    printf("Fahrenheit: %f\n Celsius: %f",f,c);
    return 0;
}