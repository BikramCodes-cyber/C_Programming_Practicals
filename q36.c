#include<stdio.h>
int main ()
{
    int balance = 5000;
    int amount;
    printf("Kitna Paisa nikalne hai! ");
    scanf("%d",&amount);
    if(balance >= 500 && amount <= balance)
    {
        printf("Transaction Successfull! Appka paisa nikal aaye hai: %d\n",amount);
    }
    else
    {
        printf(" Transaction Faild! ya to balancekam hai ya aapna accountsa Zyada maang liya: %d\n",amount);
    }
    return 0;
}