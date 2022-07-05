#include <stdio.h>
#include <math.h>
int main(){
    double a,b,A,B,n,x,i,y1,y2,ans=0;
    scanf("%lf %lf %lf %lf %lf",&a,&b,&A,&B,&n);
    x = (b-a)/n;
    for(i=a;i<b;i+=x){
        y1 = A * sin((M_PI*i)/B);
        y2 = A * sin((M_PI*(i+x))/B);
        ans += ((y1 + y2) * x)/2;
    }
    printf("%.5lf",ans);
    return 0;
}