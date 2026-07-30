#include<stdio.h>
int main ()
{
    int speed;
    printf("Speed: ");
    scanf("%d",&speed);
    if( speed <=- 0)
    {
        printf("Invalid Speed! %d\n",speed);
    }
    else if (speed <= 60)
    {
        printf("Normal Speed! %d\n",speed);
    }
    else if ( speed <= 80 )
    {
        printf("Warning! Over Speeding Fine: 500 %d\n",speed);
    }
    else if (speed <= 100)
    {
        printf("Dangerous Speed! Fine: 2000 %d\n",speed);
    }
    else
   {
    printf("License Suspended! Fine: 5000 %d\n",speed);
   } 
   return 0;
}