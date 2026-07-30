#include<stdio.h>
int main ()
{
    int choice;
    printf("1. Pizza\n");
    printf("2. Burger\n");
    printf("3. Momos\n");
    printf("4. Cold Drink\n");
    printf("5.Ice Cream\n");
    printf("Enter Your Choice: ");
    scanf("%d",&choice);

    switch ( choice )
    {
        case 1:
        printf("Pizza Price: 250");
        break;
        case 2:
        printf("Burger Price: 120");
        break;
        case 3:
        printf("Momos Price: 120");
        break;
        case 4:
        printf("Cold Drink: 40");
        break;
        case 5:
        printf("Ice Cream: 60");
        break;
        default:
        printf("Any other number - Invalid Choice");
    }
    return 0;
}