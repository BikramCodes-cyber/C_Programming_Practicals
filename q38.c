#include<stdio.h>
int main ()
{
    int age;
    int has_id;
    printf("Thumari age kitni hai aur id card hai ya nhi? ");
    scanf("%d %d",&age,&has_id);
    if(age >= 18 && has_id == 1)
    {
        printf("Allowed to entry the cinema! %d\n",age,has_id);
    }
    else
    {
        printf(" Entery Denied: %D\n",age,has_id);
    }
    return 0;
}