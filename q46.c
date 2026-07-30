#include<stdio.h>
int main ()
{
    int num;
    printf("Give ME  Integar number! ");
    scanf("%d",&num);
    if( num % 3 == 0 || num % 7 == 0 )
    {
        printf("Number %d is divisible by 3 or 7.\n",num);
    }
    else
    {
        printf("Number %d is NOT divisible by 3 or 7.\n",num);
    }
    return 0;
}