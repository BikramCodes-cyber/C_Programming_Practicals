#include <stdio.h>

int main() 
{
    int type = 2;

    if (type == 1) {
        printf("Parking Fee: 10 Rs\n");
    } 
    else if (type == 2) {
        printf("Parking Fee: 20 Rs\n");
    } 
    else if (type == 3) {
        printf("Parking Fee: 50 Rs\n");
    } 
    else {
        printf("Invalid Vehicle Type!\n");
    }

    return 0;
}