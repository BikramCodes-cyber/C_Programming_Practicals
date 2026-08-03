/*
 * File Name: q21.c
 * Program: Check Whether a Number is Greater Than 20
 * Description: Checks if the entered number is greater than 20 using an if-else statement and displays the appropriate message.
 * Author: Bikram
 */

#include<stdio.h>
int main () 
{
    int num = 10;
    if( num > 10 )
    {
        printf("Number is greater than:  %d\n ",num);
    }
    else
    {
        printf("Number is not greater than:  %d\n",num);
    }
    return 0;
}
