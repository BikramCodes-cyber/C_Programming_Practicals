#include<stdio.h>
int main()
{
    int student;
    float percentage;
    printf("Kiya Tum 12th Pass ho: ");
    scanf("%d %f",&student,&percentage);
    if(student >= 33)
    {
        printf("Yes I am 12th Pass: %d\n",student);
    if ( percentage > 60 )
    {
        printf("Admission Successful! %f\n",percentage);
    }
    else
    {
        printf("Work Hard: Incress Your Maks! %f\n",percentage);
    }
}
    else
    {
        printf("Admission Cancel! %d\n",student);
    }
return 0;

}