/*
 * File Name: q7.c
 * Program: Simple Interest Calculator
 * Description: Calculating Simple Interest using Principal, Rate, and Time.
 * Author: Bikram
 */

#include<stdio.h>
int main ()
{
    float p = 5000.50, r = 7.5, t = 3.0;
    float si;
    si= (p*r*t)/100.0;
    printf(" Principal: %f\n,Simple Intrest: %f", p ,si);
    return 0;
}