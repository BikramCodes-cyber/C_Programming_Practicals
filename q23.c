/*
 * File Name: q23.c
 * Program: VIP Member Check
 * Description: This program checks whether a customer is an Elite VIP Member, Standard VIP Member, or Not Eligible using nested if statements.
 * Author: Bikram
 */

#include<stdio.h>
int main ()
{
    int score;
    printf("Thumera Score kitna hai: ");
    scanf("%d",&score);
    if( score > 500 )
    {
        if ( score > 1000 )
    {
        printf("Elite VIP Member: %d\n ",score);
    }
    else
    {
        printf("Standard VIP Member: %d\n ",score);
    }
}
    else
    {
    printf("Not Eligible: %d\n ",score);
    }
    return  0;
}
