/*
    TASK: AP_Bush
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long a[1000100],b[1010];
int main()
{
    long long q,n,k,i,j,l,r,mid;
    scanf("%lld",&q);
    while(q--){
        memset(a,0,sizeof a);
        memset(b,0,sizeof b);
        scanf("%lld %lld",&n,&k);
        for(i=0;i<n;i++){
            scanf("%lld",&b[i]);
            a[b[i]] = 1;
        }
        l = 0, r = 1e17;
        while(l<r){
            mid = (l+r)/2;

        }
    }
    return 0;
}
