#include<stdio.h>
int main()
{
    int unit;
    printf("Electricity Units: ");
    scanf("%d",&unit);
    if(unit <= 100 )
    {
        printf("Your bill %d\n",unit*5);
    }
    else if ( unit > 100 && unit <= 200 )
    {
        printf("Your bill %d\n",unit*7);
    } 
    else
    {
    printf("You bill  %d\n",unit*10);
    }
    return 0;
}