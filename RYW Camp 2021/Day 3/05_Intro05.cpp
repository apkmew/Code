/*
    TASK : Intro05
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
    LANG : C++
*/
#include <bits/stdc++.h>
using namespace  std;
int main(){
    double x1,x2,x3,y1,y2,y3,a,b,c,k,s,ans1,ans2;
    scanf("%lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&k);
    a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    b = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    c = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    s = (a+b+c)/2;
    ans1 = sqrt(s*(s-a)*(s-b)*(s-c));
    ans2 = (a+b+c)*k + acos(-1)*k*k;
    printf("%.2lf\n%.2lf",ans1,ans2);
    return 0;
}