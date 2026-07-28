#include<stdio.h>
int main ()
{
    int num;
    printf("Given Integer? ");
    scanf("%d",&num);
    if( num < 0 && num % 2 != 0)
    {
        printf("Number is Negative and Odd. %d\n",num);
    }
    else
    {
        printf("Number is NOT Negative and Odd.%d\n",num);
    }
    return 0;
}