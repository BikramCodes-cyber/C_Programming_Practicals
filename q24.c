#include<stdio.h> 
int main ()
{
    int Speed;
    printf("Your Speed! ");
    scanf("%d",&Speed);
    if( Speed >80 )
    {
        printf("Over Speeding! FIne Applied. %d\n",Speed);
    }
    else
    {
        printf("Speed is normal. Drive safely! %d\n",Speed);
    }
    return 0;
}