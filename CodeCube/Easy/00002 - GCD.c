#include<stdio.h>
long long gcd(long long a,long long b)
    {
        if(a==0)  return b;
        return gcd(b%a,a);
    }
int main()
{
    long long i,n,ans,now,a,b;
    scanf("%lld %lld",&a,&b);
        ans = gcd(a,b);

    printf("%lld\n",ans);
    return 0;
}
