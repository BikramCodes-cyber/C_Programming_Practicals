#include<stdio.h>
int main ()
{
    int balance = 50000;
    int amount;
    printf("Enter your Amount: ");
    scanf("%d",&amount);
    if( amount <= 0)
    {
        printf("Invalid Amount! %d\n",amount);
    }
    else if ( amount >balance)
    {
        printf("Insufficient Balance! %d\n",amount);
    }
    else if ( amount > 10000 )
    {
        printf("Daily Limit Exceeded! Max limiit is 10000 %d\n",amount); 
    }
    else
    {
        printf("Transaction Successful! reamaing Balance %d\n",balance-amount);
    }
}