/*
    TASK: Intro01
    LANG: C
    AUTHOR: Dragon
    SCHOOL: PCSHS
*/
#include<stdio.h>
int main()
{
    int D;
    scanf("%d",&D);
    if (D==1)        printf("Sunday");
    else if (D==2)  printf("Monday");
    else if (D==3)  printf("Tuesday");
    else if (D==4)  printf("Wednesday");
    else if (D==5)  printf("Thursday");
    else if (D==6)  printf("Friday");
    else if (D==7)  printf("Saturday");
    else            printf("Not a day");
    return 0;
}

