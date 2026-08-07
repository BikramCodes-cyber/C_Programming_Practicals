/*
 * File Name: q30.c
 * Program: Gaming Rank Checker
 * Description: Accepts the user's gaming score and checks whether the player remains in Bronze Rank or is promoted to Silver Rank.
 * Author: Bikram
 */

 #include<stdio.h> 
int main ()
{
    int score;
    printf("Your Gaming Rank Score! ");
    scanf("%d",&score);
    if( score <= 100 )
    {
        printf("Bronze Rank! Your Score: %d\n",score);
    }
    else
    {
        printf("Promotrd  to Silver Rank! Your Score: %d\n",score);
    }
    return 0;
}