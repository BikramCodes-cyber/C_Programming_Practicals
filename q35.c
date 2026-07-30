#include<stdio.h>
int main ()
{
    int userpassword;
    printf("Locker ka password! ");
    scanf("%d",&userpassword);
    if( userpassword != 7777)
    {
        printf("Locker Locked! Worng Password: %d\n",userpassword);
    }
    else
    {
    printf("Locker Unlocked Seccessfuly: %d\n",userpassword);
    }
    return 0;
}