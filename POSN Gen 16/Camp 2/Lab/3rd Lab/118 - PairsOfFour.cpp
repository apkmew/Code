/*
    TASK: Pairs of Four
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int mic[1010][1010];
char a[1010];
int dp(int st,int en){
    if(st>=en) return 0;
    if(mic[st][en]!=-1) return mic[st][en];
    if(a[st]==a[en]) mic[st][en] = dp(st+1,en-1)+1;
    for(int i=st;i<en;i++) mic[st][en] = max(mic[st][en],dp(st,i)+dp(i+1,en));
    return mic[st][en];
}
int main()
{
    int n,i;
    memset(mic,-1,sizeof mic);
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf(" %c",&a[i]);
    printf("%d",dp(0,n-1));

    return 0;
}
