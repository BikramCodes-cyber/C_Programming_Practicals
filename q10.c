#include<stdio.h>
int main ()
{
    float sub1 = 78.5,sub2 = 82.0, sub3 = 69.5,sub4 = 91.0;
    float total, average, percentage;
    total =sub1 + sub2 + sub3 + sub4;
    average = total/4.0;
    percentage = (total/400.0)*100.0;
    printf("Total: %f\n Average: %f\n Percentage: %f",total,average,percentage);
    return 0;
}