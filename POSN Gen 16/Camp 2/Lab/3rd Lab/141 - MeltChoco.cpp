/*
    TASK: Melt Choco
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int cnt,ans,l,r;
int nub(int n){
    if(n<=1)    return 1;
    return 2*nub(n/2)+1;
}
void play(int n,int ll,int rr){
    if(rr<l || ll>r)    return ;
    if(n==1 || n==0){
        ans+=n;
        return ;
    }
    int mid = nub(n/2);
    play(n/2,ll,ll+mid-1);
    play(n%2,ll+mid,ll+mid);
    play(n/2,ll+mid+1,rr);
}
int main()
{
    int n;
    scanf("%d %d %d",&n,&l,&r);
    play(n,1,nub(n));
    printf("%d",ans);
    return 0;
}
