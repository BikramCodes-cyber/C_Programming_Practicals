#include<stdio.h> 
int main ()
{
    int pin,is_blocked;
    printf("Pleace enter the UPI Pin? ");
    scanf("%d %d",&pin,&is_blocked);
    if( pin == 1234 && is_blocked != 1)
    {
        printf("Login Successfuly! Access Granted! %d\n",pin,is_blocked);
    }
    else
    {
        printf("Login Failed! Incorrect PIn or Account Blocked! %d\n",pin,is_blocked);
    }
    return 0;
}