#include <stdio.h>

int main() {
    int totalAmount = 750;  
    int isPremiumMember = 1; 
   
    if (totalAmount >= 500) 
    {
        printf("You qualify for Free Delivery!\n");
    
        if (isPremiumMember == 1)
         {
            printf("Premium Benefit: You get an extra 10%% Discount!\n");
        }
         else 
         {
            printf("Regular Customer: Standard pricing applied.\n");
        }

    } 
    else
     {
        printf("Add more items worth Rs. %d for Free Delivery!\n", 500 - totalAmount);
    }

    return 0;
}