#include<stdio.h>
int main ()
{
    int num;
    printf("Give me One integer! ");
    scanf("%d",&num);
    if(! (num % 5 == 0 ) )
    {
        printf("NUmber is not divisible by! 5 %d\n",num);
    }
    else
    {
        printf("Number is Disable by5 %d\n",num);
    }
    return 0;
}