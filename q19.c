/*
 * File Name: q19.c
 * Program: Accept Initial and Age
 * Description: Reads a person's initial and age, then displays the entered values.
 * Author: Bikram
 */

#include<stdio.h>
int main ()
{
    int age;
    char internal;
    printf("Enter the internal and age: ");
    scanf("%c %d",&internal,&age);
    printf("Initial: %c\n Age: %d\n",internal,age);
    return 0;
}
