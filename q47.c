#include<stdio.h>
int main ()
{
    int num;
    printf("Give me one Integer! ");
    scanf("%d",&num);
    if( num < 0 || num % 2 == 0)
    {
        printf("Number is Negative OR Even! %d\n",num);
    }
    else
    {
        printf("Number is NOT Negative and NOt Even! %d\n",num);
    }
    return 0;
}