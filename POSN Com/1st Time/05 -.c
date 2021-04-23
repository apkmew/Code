#include<stdio.h>
#include<math.h>
int main(){
    double r,a,v;
    scanf("%lf",&r);
    a = M_PI*r*r;
    v = M_PI*r*r*r*4/3;
    printf("%.2lf\n%.2lf\n",a,v);
    return 0;
}
