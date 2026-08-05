/*
 * File Name: q27.c
 * Program : Area Calculator using Switch Case
 * Description: Accepts the user's choice and calculates the area of a Square, Rectangle, Circle, or Triangle using the switch-case statement.
 * Author: Bikram
 */

#include<stdio.h> 
int main ()
{
    int age;
    printf("Your Age! ");
    scanf("%d",&age);
    if ( age >= 18 )
    {
        printf("Eligible for Driving License! Age: %d\n", age);
    }
    else
    {
        printf("NOt Eligablie For Driving License! Age: %d\n",age);
    }
    return 0;
}
