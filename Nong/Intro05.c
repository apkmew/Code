/*
    TASK: Intro05
    LANG: C
    AUTHOR: Dragon
    SCHOOL: PCSHS
*/
#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,x3,y3,k,a,b,c,s;
    scanf("%lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&k);
    a = sqrt( pow(x1-x2,2) + pow(y1-y2,2));
    b = sqrt( pow(x1-x3,2) + pow(y1-y3,2));
    c = sqrt( pow(x2-x3,2) + pow(y2-y3,2));
    s = (a+b+c)/2;
    printf("%.2lf\n",sqrt(s*(s-a)*(s-b)*(s-c)));
    printf("%.2lf\n",k*(a+b+c)+M_PI*k*k);
    return 0;
}
/*

0 0 3 0 0 4 2

*/
