/*
 * File Name: q20.c
 * Program: Calculate Total and Average Marks
 * Description: Reads marks of three subjects, calculates the total and average, and displays the results.
 * Author: Bikram
 */

#include<stdio.h>
int main ()
{
    float m1,m2,m3,total,average;
    printf("Enter 3 subject marks: ");
    scanf("%f %f %f",&m1,&m2,&m3);
    total = m1 + m2 + m3;
    average  = total / 3.0;
    printf("Total: %.2f\n Average: %.2f", total,average);
    return 0;
}
