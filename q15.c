/*
 * File Name: q15.c
 * Program: Store and Display Different Data Types
 * Description: Declares variables of different data types (string, integer, float, and character) and displays their values using printf().
 * Author: Bikram
 */

#include<stdio.h>
int main ()
{
    char user_name[] = "Red Team";
    int rank = 1;
    float score = 98.5;
    char status = 'A';
    printf("Hacker: %s\n Rank: %d\n Score: %f\n status: %c", user_name,rank,score,status);
    return 0;
}
