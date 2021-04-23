#include<stdio.h>
long long lcm(long long a,long long b)
    {
        if(a%b==0)  return b;
        return lcm(b,a%b);
    }
int main()
{
    long long i,n,ans,now;
    scanf("%lld %lld",&now,&ans);
    ans = ans*now/lcm(ans,now);
    printf("%lld\n",ans);
    return 0;
}
