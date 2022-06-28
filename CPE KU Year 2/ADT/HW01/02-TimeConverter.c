#include<stdio.h>
int main(){
    long long t,d=0,h=0,m=0,s=0;
    scanf("%lld",&t);
    d = t / 86400;  t %= 86400;
    h = t / 3600;   t %= 3600;
    m = t / 60;     t %= 60;
    s = t;
    printf("%lld %lld %lld %lld",d,h,m,s);  
    return 0;
}