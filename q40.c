#include<stdio.h>
int main ()
{
    int user_type;
    int is_suspended;
    printf("User type kitna hai(2 for admin) aur suspension status kya hai? ");
    scanf("%d %d",&user_type,&is_suspended);
    if( user_type == 2 && is_suspended != 1)
    {
        printf("Admin Access Granted! %d\n",user_type,is_suspended);
    }
    else
    {
        printf("Access Denied! %d\n",user_type,is_suspended);
    }
    return 0;
}