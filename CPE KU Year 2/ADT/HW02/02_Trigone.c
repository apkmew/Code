#include <stdio.h>
#include <math.h>
long long factt(long long x){
    long long i,ans=1;
    for(i=2;i<=x;i++){
        ans *= i;
    }
    return ans;
}
double sinn(double x){
    long long i,a;
    double ans=0;
    for(i=1;i<=10;i++){
        a = i * 2 - 1;
        ans += pow(-1,i+1) * pow(x,a) / factt(a);
    }
    return ans;
}
double coss(double x){
    return sqrt(1-pow(sinn(x),2));
}
double tann(double x){
    return sinn(x)/coss(x);
}
int main(){
    double x;
    scanf("%lf",&x);
    x = x * M_PI / 180;
    printf("%.14lf %.14lf %.14lf",sinn(x),coss(x),tann(x));
    return 0;
}