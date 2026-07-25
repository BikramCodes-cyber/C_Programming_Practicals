#include<stdio.h>
int main ()
{
    int a = 5, b =10,temp;
    temp = a;
    a = b;
    b = temp;
    printf("Affter Swapping: a = %d, b = %d",a,b);
    return 0;
}