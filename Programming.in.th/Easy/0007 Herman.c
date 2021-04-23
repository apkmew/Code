#include<stdio.h>
#include<math.h>
int main(){
    double r,a,b;
    scanf("%lf",&r);
    a = M_PI*r*r;
    b = r * r * 2;
    printf("%lf\n%lf",a,b);
    return 0;
}
