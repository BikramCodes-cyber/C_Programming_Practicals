/*
 * File Name: q5.c
 * Program: Total & Average Marks (Integer)
 * Description: Calculating the total and average marks of 3 subjects using integer data types.
 * Author: Bikram
 */

#include<stdio.h>
int main ()
{
    int m1 = 20, m2 = 4,m3 = 89;
    int total,average;
    total = m1 + m2 + m3; 
    average = total /3;
    printf(" Total Marks:%d\nAverage Marks: %d ",total,average);
    return 0;
}