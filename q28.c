/*
 * File Name: q28.c
 * Program: Bank Balance Checker
 * Description: Accepts the user's bank balance and checks whether they are eligible for VIP services.
 * Author: Bikram
 */

#include<stdio.h> 
int main ()
{
    int Balance;
    printf("Your Bank Balance is! ");
    scanf("%d",&Balance);
    if( Balance >= 5000 )
    {
        printf("Eligible for VIP Servies! Balance: %d\n",Balance);
    }
    else
    {
    printf("Low Balance! Minimum  required is 5000. Balance: %d\n",Balance);
    }
    return 0;

}
