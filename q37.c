#include<stdio.h>
int main ()
{
    float rate = 45.50;
    float hour;
    float total_fee;
    printf("Kitna Hour huwa hai apka! ");
    scanf("%f",&hour);
    total_fee =hour * rate; 
    if( hour > 3.0)
    {
    printf("3 ghante se zayda rukhnen par total fee: %.2f\n",total_fee);
    }
    else
    {
        printf("Normal fee(3 ghante ka kam): %.2f\n", total_fee);
    }
    return 0;

}