#include<stdio.h> 
int main ()
{
    int age;
    printf("Your Age! ");
    scanf("%d",&age);
    if ( age >= 18 )
    {
        printf("Eligible for Driving License! Age: %d\n", age);
    }
    else
    {
        printf("NOt Eligablie For Driving License! Age: %d\n",age);
    }
    return 0;
}