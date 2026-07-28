#include<stdio.h>
int main ()
{
     int num;
     printf("GIve me one Number input! ");
     scanf("%d",&num);
     if(! ( num > 0 ))
     {
        printf("Positive nhi hai %d\n",num);
     }
     else
     {
        printf("Postive number hai %d\n",num); 
     }
     return 0;
}