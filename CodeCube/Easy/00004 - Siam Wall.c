#include<stdio.h>

long long gcd(long long a,long long b)
    {
        if(a%b==0)  return b;
        return gcd(b,a%b);
    }

int main(){
    long long i,n,now;
    long long h = 0 ;
    long long ans;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&now);
        h = h + now;
        if(i > 0)
            ans = gcd(now,ans);
        else if(i <= 0)
            ans = gcd(now,now);
    }
    printf("%lld",h/ans);
    return 0;
}
