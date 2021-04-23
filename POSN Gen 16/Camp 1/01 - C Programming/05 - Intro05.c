/*
    TASK: Intro05
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,x3,y3,k,a,b,c,s,ans1,ans2;
    scanf("%lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&k);
    a = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    b = sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    c = sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    s = (a+b+c)/2;
    ans1 = sqrt(s * (s-a) * (s-b) * (s-c));
    ans2 = M_PI*pow(k,2)+a*k+b*k+c*k;
    printf("%.2lf\n",ans1);
    printf("%.2lf\n",ans2);
    return 0;
}

