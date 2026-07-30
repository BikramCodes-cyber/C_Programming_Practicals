#include<stdio.h>
int main()
{
    int pass_marks,percentage;
    printf("Enter Passing Marks and Percentage: ");
    scanf("%d %d",&pass_marks,&percentage);
    if( pass_marks >= 33)
    {
        printf("Your Passing Marks! %d\n",pass_marks);
    if(percentage >= 75 )
    {
        printf("You Got Scholarship! %d\n",percentage);
    }
    else
    {
        printf("Admission Successful! %d\n",percentage);
    }
    }
    else
    {
        printf("Fail! %d\n",pass_marks);
    }
    return 0;
}
