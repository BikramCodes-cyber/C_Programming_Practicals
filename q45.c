#include<stdio.h>
int main ()
{
    int num;
    printf("Given Integer IS EVEN! ");
    scanf("%d",&num);
    if( num % 2 == 0 && num % 5 == 0 )
    {
        printf("Number %d is Even and Divisible by! 5.\n ",num);
    }
    else
    {
        printf("Number %ddoes NOT meet both conditions! 5.\n ", num);
    }
    return 0;
}