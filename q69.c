#include<stdio.h>
int main ()
{
    int choice;
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("Enter Choice: ");
    scanf("%d",&choice);

    switch ( choice )
    {
        case 1:
        printf("Check Balance");
        break;
        case 2:
        printf("Deposit");
        break;
        case 3:
        printf("Withdraw");
        break;
        case 4:
        printf("Exit");
        default:
        printf("Invalid Choice");
    }
    return 0;

}