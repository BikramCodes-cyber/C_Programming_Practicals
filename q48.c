#include<stdio.h>
int main ()
{
    int num;
    printf("Give one Integer number. ");
    scanf("%d",&num);
    if( num < 10 || num > 100)
    {
        printf("Number is  less than 10 greater than 100. %d\n",num);
    }
    else
    {
        printf("Number is between 10 and 100. %d\n",num);
    }
    return 0;
}
