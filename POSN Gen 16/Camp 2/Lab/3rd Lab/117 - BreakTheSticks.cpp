/*
    TASK: Break The Sticks
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int dp[55][55],a[55];
int stick(int l,int r,int len,int fir){
    if(l==r) return 0;
    if(dp[l][r]) return dp[l][r];
    int minn = 1e9,now;
    for(int k=l;k<r;k++){
        now = stick(l,k,a[k]-fir,fir) + stick(k+1,r,len-a[k]+fir,a[k]) + len;
        minn = min(minn,now);
    }
    return dp[l][r] = minn;
}
int main()
{
    int n,p;
    scanf("%d %d",&n,&p);
    for(int i=0;i<p;i++) scanf("%d",&a[i]);
    printf("%d\n",stick(0,p,n,0));
    return 0;
}
