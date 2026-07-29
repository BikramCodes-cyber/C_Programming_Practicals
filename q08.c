/*
 * File Name: q8.c
 * Program: Area and Perimeter of Rectangle
 * Description: Calculating the area and perimeter of a rectangle using length and width.
 * Author: Bikram
 */

#include<stdio.h>
 int main ()
 {
    float length = 10.5, width = 4.5, area, perimeter;
    area = length * width;
    perimeter = 2 * ( length + width);
    printf(" Area: %f\n Perimeter %f",area,perimeter);
    return 0;
 }