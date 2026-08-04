/*
 * File Name: q25.c
 * Program: Pass or Fail
 * Description: This program checks whether a student has passed or failed based on the entered marks using if-else statements.
 * Author: Bikram
 */

#include<stdio.h>
int main ()
{
    int Marks;
    printf("Student MArks! ");
    scanf("%d",&Marks);
    if( Marks < 33 )
    {
        printf("Faild! You need to work hard: %d\n ",Marks);
    }
    else
    {
        printf("pass! Congratulations. Marks: %d\n",Marks); 
    }
    return 0;
}
