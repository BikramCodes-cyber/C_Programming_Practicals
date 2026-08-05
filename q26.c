#include<stdio.h>
int main ()
{
    int age;
    printf("Your Age! ");
    scanf("%d",&age);
    if( age < 12 )
    {
        printf("Eligable for child Discount! Age %d\n",age);
    }
    else
    {
        printf(" Standard Adult Ticket! Age %d\n",age);
    }
    return 0;
}