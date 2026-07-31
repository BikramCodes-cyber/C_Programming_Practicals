/*
 * File Name: q16.c
 * Program: Accept and Display Age
 * Description: Accepts the user's age as input using scanf() and displays it using printf().
 * Author: Bikram
 */

#include<stdio.h>
int main ()
{
    int age;
    printf("Enter Your age: ");
    scanf("%d",&age);
    printf("You are is: %d\n",age);
    return 0;
}
