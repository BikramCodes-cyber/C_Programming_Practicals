#include<stdio.h>
int main ()
{
    int num;
    printf("Given by Integer number! ");
    scanf("%d",&num);
    if( num % 5 == 0 || num % 11 == 0 )
    {
        printf("Number is divisible by 5 or 11. %d\n",num);
    }
    else
    {
        printf("Number is not divisible by 5 or 11. %d\n",num);
    }
    return 0;
}