#include<stdio.h>
int main ()
{
    int age,salary;
    printf("Your Age! and Salary: ");
    scanf("%d %d",&age,&salary);
    if(age >= 18)
    {
        printf("Your Age: %d\n",age);
        if(salary >= 25000)
        {
            printf("Loan Approved! %d\n",salary);
        }
        else
        {
            printf("Loan Rejected! Salary Low: %d\n",salary);
        }
    }
    else
    {
        printf("Loan Rejected: Under Age! %d\n",age);
    }
    return 0;
}