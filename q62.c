#include <stdio.h>

int main() {
    int isMallTicket = 1;
    int isVIP = 0;

    if (isMallTicket == 1)
     {
        
        if (isVIP == 1)
         {
            printf("Welcome to VIP Lounge!\n");
        } 
        else 
        {
            printf("Welcome to Normal Theater!\n");
        }

    } 
    else 
    {
        printf("Entry Denied! Pehle ticket kharido.\n");
    }

    return 0;
}