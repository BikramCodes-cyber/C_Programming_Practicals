#include<stdio.h> 
int main ()
{
    int password;
    printf("Please enter your password! ");
    scanf("%d",&password);
    if( password == 5555)
    {
        printf("Locker Unlocked Successfully! PAssword: %d\n",password);
    }
    else
    {
        printf("Worng Password! Locker Locked. Password: %d\n",password);
    }
    return 0;
}