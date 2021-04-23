#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c;
    scanf("%lf %lf",&a,&b);
    c = sqrt(a*a+b*b);
    printf("%.6lf",c);
    return 0;
}
