#include<stdio.h>
int main () 
{
    int  num;
    printf("Guve me one integer: ");
    scanf("%d",&num);
    if(! (num % 5 == 0) )
    {
        printf("Number %d is not divisible by 5. \n",num);
    }
    else
    {
        printf("NUmber %d is divisible by 5. \n",num);
    }
    return 0;
}