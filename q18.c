/*
 * File Name: q18.c
 * Program: Accept Roll Number and Marks
 * Description: Reads a student's roll number and marks, then displays the entered values.
 * Author: Bikram
 */

#include<stdio.h>
int main ()
{
    int Roll_Number;
    float Marks;
    printf("Enter Roll Number and Marks: ");
    scanf("%d %f",&Roll_Number,&Marks);
    printf("Roll: %d\n Marks: %f\n", Roll_Number,Marks);
    return 0;
}
