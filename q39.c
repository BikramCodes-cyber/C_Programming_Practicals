#include<stdio.h>
int main () 
{
    int amount;
    int its_prime;
    printf("Kitna ka Oder hai!\n prime kitna hai apka! ");
    scanf("%d %d",&amount,&its_prime);
    if( amount >=1000 && its_prime == 1)
    {
        printf("Congralulation! You get Free Delivery! %d\n",amount,its_prime);
    }
    else
    {
        printf("Delivery charges will apply! %d\n",amount,its_prime);
    }
    return 0;
}