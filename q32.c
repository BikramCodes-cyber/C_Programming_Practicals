/*
 * File Name: q32.c
 * Program: Password Locker Verification
 * Description: Accepts the password and checks whether the entered password is correct to unlock the locker.
 * Author: Bikram
 */

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