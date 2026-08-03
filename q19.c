#include<stdio.h>
int main ()
{
    int age;
    char internal;
    printf("Enter the internal and age: ");
    scanf("%c %d",&internal,&age);
    printf("Initial: %c\n Age: %d\n",internal,age);
    return 0;
}