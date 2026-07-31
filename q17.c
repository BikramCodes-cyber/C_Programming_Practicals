/*
 * File Name: q17.c
 * Program: Sum and Product of Two Numbers
 * Description: Accepts two integers from the user and displays their sum and product.
 * Author: Bikram
 */

#include<stdio.h>
int main ()
{
    int a , b;
    printf("Enter Two Numbers: ");
    scanf("%d %d",&a,&b);
    printf("Sum: %d\n Product: %d\n",a+b, a*b);
    return 0;
}
