#include<stdio.h>
int main ()
{
    int age;
    printf("Whether a person's age? ");
    scanf("%d",&age);
    if( age >= 18 && age <= 25)
    {
        printf("Age fall in the Youth category. %d\n",age);
    }
    else
    {
        printf("Age does NOT fall in the yoth category.%d\n",age);
    }
    return 0;
}