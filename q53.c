#include<stdio.h>
int main ()
{
    int age;
    printf("Your Age! ");
    scanf("%d",&age);
    if( ! ( age >= 18 ))
    {
        printf(" You %d are not Eligible for Vote.\n ",age);
    }
    else
    {
        printf("You are: Eligible for Vote! %d\n",age);
    }
    return 0;
}