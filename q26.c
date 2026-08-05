/*
 * File Name: q26.c
 * Program : Child Discount Eligibility
 * Description: Accepts the user's age as input and checks whether the user is eligible for a child discount or a standard adult ticket using the if-else statement.
 * Author: Bikram
 */

#include<stdio.h>
int main ()
{
    int age;
    printf("Your Age! ");
    scanf("%d",&age);
    if( age < 12 )
    {
        printf("Eligable for child Discount! Age %d\n",age);
    }
    else
    {
        printf(" Standard Adult Ticket! Age %d\n",age);
    }
    return 0;
}
