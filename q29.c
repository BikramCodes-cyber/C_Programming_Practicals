/*
 * File Name: q29.c
 * Program: Junior Hacker Challenge Eligibility
 * Description: Accepts the user's age and checks whether they are eligible to participate in the Junior Hacker Challenge.
 * Author: Bikram
 */

#include<stdio.h> 
int main ()
{

    int age;
    printf("Enter your age! ");
    scanf("%d",&age);
    if( age <= 28 )
    {
        printf("Welcome to the Junior Hacker Challenge! %d\n ",age);
    }
    else
    {
        printf("Sorry, you are over the age limit. %d\n",age);
    }
    return 0;
}
