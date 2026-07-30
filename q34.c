#include<stdio.h>
int main ()
{
    int pin;
    printf("Enter your Pin! ");
    scanf("%d",&pin);
    if( pin != 1234 )
    {
        printf("Alert! Wrong Pin Entered: %d\n",pin);
    }
    else
    {
        printf("Welcome! PIN is Correct: %d\n",pin);
    }
    return 0;
}