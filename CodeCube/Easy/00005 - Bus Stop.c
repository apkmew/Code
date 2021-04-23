#include<stdio.h>
long long lcm(long long a,long long b)
    {
        if(a%b==0)  return b;
        return lcm(b,a%b);
    }
int main()
{
    long long i,n,ans,now;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&now);
        if(i > 0)
            ans = ans*now/lcm(ans,now);
        else if(i <= 0)
            ans = 1*now/lcm(ans,now);
    }
    printf("%lld\n",ans);
    return 0;
}
