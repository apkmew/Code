/*
    TASK: Grade Easy
    LANG: C
    AUTHOR: Dragon
    SCHOOL: PCSHS
*/
#include<stdio.h>
int main()
{
    int score;
    scanf("%d",&score);
    if(score>=80)       printf("A\n");
    else if(score>=75)  printf("B+\n");
    else if(score>=70)  printf("B\n");
    else if(score>=65)  printf("C+\n");
    else if(score>=60)  printf("C\n");
    else if(score>=55)  printf("D+\n");
    else if(score>=50)  printf("D\n");
    else                printf("F\n");
    return 0;
}
