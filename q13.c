/*
 * File Name: q13.c
 * Program: Student Information
 * Description: This program stores and displays student's name, age, height, and section using different data types.
 * Author: Bikram
 */

 #include<stdio.h>
int main ()
{
    char name[] = "Bikram";
    int age = 18;
    float height =5.9;
    char section = 'B';
    printf("Student Name: %s\n Age: %d\n Height: %f\n Section: %c",name,age,height,section);
    return 0;
}