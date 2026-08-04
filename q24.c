/*
 * File Name: q24.c
 * Program: Speed Checker
 * Description: This program checks whether the entered vehicle speed is above the speed limit using if-else statements.
 * Author: Bikram
 */

#include<stdio.h> 
int main ()
{
    int Speed;
    printf("Your Speed! ");
    scanf("%d",&Speed);
    if( Speed >80 )
    {
        printf("Over Speeding! FIne Applied. %d\n",Speed);
    }
    else
    {
        printf("Speed is normal. Drive safely! %d\n",Speed);
    }
    return 0;
}
