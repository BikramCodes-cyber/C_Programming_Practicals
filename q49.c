#include<stdio.h>
int main ()
{
    int num;
    printf("Give ME one Integer! ");
    scanf("%d",&num);
    if( num % 4 == 0 || num % 6 == 0)
    {
        printf("Number is divisible by 4 or 6. %d\n",num);
    }
    else
    {
        printf("NUmber is NOt divisible by 4 or 6. %d\n",num);
    }
    return 0;
}