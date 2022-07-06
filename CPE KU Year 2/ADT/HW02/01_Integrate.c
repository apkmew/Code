#include <stdio.h>
#include <math.h>
int main(){
    double a,b,A,B,x,y1,y2,ans=0;
    int n,i;
    scanf("%lf %lf %lf %lf %d",&a,&b,&A,&B,&n);
    x = (b-a)/n;
    for(i=0;i<n;i++){
        y1 = A * sin((M_PI*(a+i*x))/B);
        y2 = A * sin((M_PI*(a+(i+1)*x))/B);
        ans += ((y1 + y2) * x)/2;
    }
    printf("%.5lf",ans);
    return 0;
}