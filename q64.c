#include<stdio.h>
int main ()
{
    int balance = 15000;
    int amounnt;
    int entered_pin;
    printf("Enter! Your Amount: ");
    scanf("%d %d",&amounnt,&entered_pin);
    if ( entered_pin == 845416 )
    { 
        printf("Enter Pin Successful: %d\n",entered_pin);
        
        if ( balance >= amounnt)
        {
            printf("Transaction Successful! Bacha hua balance: %d\n",balance -amounnt);
        }
        else
        {
            printf("Insufficient balance! %d\n",balance);
        } 
    }
        else
        {
            printf("Incorrect PIn! Access Denied. %d\n",balance);
        }
    return 0;
}