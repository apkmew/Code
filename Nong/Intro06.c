/*
    TASK: Intro06
    LANG: C
    AUTHOR: Dragon
    SCHOOL: PCSHS
*/
#include<stdio.h>
#include<math.h>
int main()
{
    double r;
    scanf("%lf",&r);
    printf("%.3lf\n",4*M_PI*r*r);
    printf("%.3lf\n",4.0/3*M_PI*r*r*r);
    printf("%.3lf\n",M_PI*r*r);
    printf("%.3lf\n",2*M_PI*r);
    return 0;
}
