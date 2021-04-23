/*
    TASK: TaepShoot
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
pair<char,int> g[10001000];
int x;
void opr1(int n,int state){
    if(g[n].first==NULL) return ;
    if(g[n].first=='L'){
        g[2*n].second = g[n].second;
        g[2*n+1].second = g[n].second+pow(2,state);
    }
    else if(g[n].first=='R'){
        g[2*n+1].second = g[n].second;
        g[2*n].second = g[n].second+pow(2,state);
    }
    opr1(2*n,state+1);
    opr1(2*n+1,state+1);
    return ;
}
void opr2(int n){
    if(g[n].second!=0) return ;
    opr2(2*n);
    opr2(2*n+1);
    if(g[2*n].second < g[2*n+1].second){
        g[n].first = 'L';
        g[n].second = g[2*n].second;
    }
    else if(g[2*n+1].second < g[2*n].second){
        g[n].first = 'R';
        g[n].second = g[2*n+1].second;
    }
    return ;
}
int main()
{
    int opr,n,i,cnt;
    scanf("%d",&opr);
    scanf("%d",&n);
    x = pow(2,n);
    if(opr==1){
        for(i=1;i<=x-1;i++) scanf(" %c",&g[i].first);
        g[1].second = 1;
        opr1(1,0);
        if(x>555555){
            for(i=x,cnt=0;cnt<555555;i++,cnt++) printf("%d ",g[i].second);
        }
        else{
            for(i=x;i<=2*x-1;i++) printf("%d ",g[i].second);
        }
    }
    if(opr==2){
        for(i=x;i<=2*x-1;i++) scanf("%d",&g[i].second);
        opr2(1);
        for(i=1;i<=x-1;i++) printf("%c",g[i].first);
    }
    return 0;
}
