#include<stdio.h>
int main ()
{
    int age;
    printf("Child Age: ");
    scanf("%d",&age);
    if( age < 12 )
    {
        printf("Ticket price = 50 %d\n",age);
    }
    else if ( age >= 12 && age < 25)
    {
        printf("Ticket  price = 100 %d\n",age);
    }
    else if ( age >= 25 && age < 60)
    {
        printf("Ticket price = 200 %d\n",age);
    }
    else
    {
        printf("Ticket free %d\n",age);
    }
    return 0;
}