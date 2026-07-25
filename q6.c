#include<stdio.h> 
int main ()
{
    float m1 = 85.5, m2 = 90.0, m3 = 78.5;
    float total,percentage;
    total = m1 + m2 + m3;
    percentage = total / 3.0;
    printf("Total Marks: %f\n Total Percentage %f",total,percentage);
    return 0;
}