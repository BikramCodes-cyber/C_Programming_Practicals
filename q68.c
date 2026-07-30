#include<stdio.h>
int main()
{
     int choice;
     
     printf("1. Mang\n");
     printf("2. Apple\n");
     printf("3. Banana\n");
     printf("4. Orange\n");
     printf("Enter Your Choice: ");
     scanf("%d",&choice);

     switch ( choice)
     {
     case 1:
     printf("You Selected MAngo");
        break;
        case 2:
        printf("You Selected Apple");
        break;
        case 3:
        printf("You Selected Banana");
        break;
        case 4:
        printf("You SElected Orange");
        break;
        default:
        printf("Invalid Choice");
     }
     return 0;
}