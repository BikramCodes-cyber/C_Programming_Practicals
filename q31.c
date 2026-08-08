/*
 * File Name: q31.c
 * Program: UPI PIN Verification
 * Description: Accepts the UPI PIN and checks whether the entered PIN is correct.
 * Author: Bikram
 */

 #include<stdio.h>
int main ()
{
    int pin;
    printf("Enter your UPI pin! ");
    scanf("%d",&pin);
    if( pin == 1234)
    {
        printf("Correct! Access Granted Pin: %d\n",pin);
    }
    else
    {
        printf("Wrong pin! Access Denied, Pin: %d\n",pin);
    }
    return 0;
}