/*
    TASK: Intro04
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
int main()
{
    double a,b,c,d,ans=0;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    ans = d*a/(c-b);
    printf("%.2lf",ans);
    return 0;
}
