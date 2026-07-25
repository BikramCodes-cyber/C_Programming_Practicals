#include<stdio.h>
int main ()
{
    float m1,m2,m3,total,average;
    printf("Enter 3 subject marks: ");
    scanf("%f %f %f",&m1,&m2,&m3);
    total = m1 + m2 + m3;
    average  = total / 3.0;
    printf("Total: %.2f\n Average: %.2f", total,average);
    return 0;
}