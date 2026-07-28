#include<stdio.h>
int main ()
{
    int a = 67, b = 82, c =78;
    if( a > b && a > c)
    {
        printf("Sabse bada a hai: %d\n ",a);
    }
    else if ( b > a && b > c)
    {
        printf("Sabse bada b hai: %d\n",b);
    }
    else
    {
        printf("Sabse bada c hai: %d\n ",c);
    }
    return 0;
}