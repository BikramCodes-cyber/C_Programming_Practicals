/* 
 * File Name: q3.c
 * Program: Multiplication of Two Numbers with User Input
 * Description: Taking two numbers as input from the user using scanf and printing their product.
 * Author: Bikram
 */

#include<stdio.h>
int main ()
{
    int num1,num2;
    printf("First num: ");
    scanf("%d",&num1);
    printf("Second num: ");
    scanf("%d",&num2);
    printf("Multipication the number:%d\n",num1*num2);
    return 0;
}