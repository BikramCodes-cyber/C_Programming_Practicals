#include<stdio.h>
int main () 
{
    char b;
    printf("Give me One input! ");
    scanf("%c",&b);
    if(! ( b == 'A' ))
    {
        printf(" YA A nhi hai %c\n",b);
    }
    else
    {
        printf("YA A hai %c\n",b);
    }
    return 0;
}
