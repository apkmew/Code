/*
    TASK: PT_BigPom
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long a[100100];
long long n,c,r,s;
long long play(long long lf,long long rt){
    long long i,j,now;
    i = lower_bound(a,a+c,lf)-a;
    j = upper_bound(a,a+c,rt)-a;
    if(lf>=rt){
        if(j-i>0) return s*(j-i)*(rt-lf+1);
        else return r;
    }
    long long mid = (lf+rt)/2;
    if(j-i>0) now = s*(j-i)*(rt-lf+1);
    else return r;
    return min(now,play(lf,mid)+play(mid+1,rt));
}
int main()
{
    long long ans,q,i;
    scanf("%lld",&q);
    while(q--){
        scanf("%lld %lld %lld %lld",&n,&c,&r,&s);
        for(i=0;i<c;i++) scanf("%lld",&a[i]);
        sort(a,a+c);
        ans = play(1,pow(2,n));
        printf("%lld\n",ans);
        memset(a,0,sizeof a);
    }
    return 0;
}
