#include<stdio.h>
int main ()
{
    int num1,num2;
    printf("Whether two numbers? ");
    scanf("%d %d",&num1,&num2);
    if( num1 >= 0 && num2 >= 0)
    {
        printf("Both numbers are strictly greater than! %d\n",num1,num2);
    }
    else
    {
        printf("BOth numbers are NOT greather than! %d\n",num1,num2);
    }
    return 0;
}