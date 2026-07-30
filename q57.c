#include<stdio.h>
int main ()
{
    int marks;
    printf("Student marks! ");
    scanf("%d",&marks);
    if( marks > 90 )
    {
        printf("Grade A %d\n",marks);
    }
    else if ( marks > 75 )
    {
        printf("Grade B %d\n",marks);
    }
    else if ( marks > 50 )
    {
        printf("Grade C %d\n",marks);
    }
    else 
    {
        printf("Fail %d\n",marks);
    }
    return 0;
}