#include <stdio.h>
#include <math.h>
int main(){
    double x1,y1,x2,y2,x3,y3,i,j,k,a,b,c,s,area;
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
    a = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    b = sqrt(pow(x2-x3,2)+pow(y2-y3,2));
    c = sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    i = sqrt(4*area/sqrt(3));
    j = i/2;
    k = sqrt(3)*j;
    printf("%.2lf %.2lf %.2lf",i,j,k);
    return 0;
}
// -1 1 1 1 2 2 