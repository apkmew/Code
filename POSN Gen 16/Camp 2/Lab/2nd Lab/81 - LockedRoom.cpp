/*
    TASK: Locked Room
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,j,w,s;
    bool operator<(const A& o)const{
        return w>o.w;
    }
};
priority_queue<A> pq;
int dis[2][60][60],di[4]={1,-1,0,0},dj[4]={0,0,-1,1},a[60][60];
int main()
{
    int n,i,j,si,sj,ei,ej,ni,nj,w,s,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d %d %d %d",&si,&sj,&ei,&ej);
    memset(dis,-1,sizeof dis);
    pq.push({si,sj,0});
    while(!pq.empty()){
        i = pq.top().i;
        j = pq.top().j;
        w = pq.top().w;
        s = pq.top().s;
        pq.pop();
        if(dis[s][i][j]!=-1) continue;
        dis[s][i][j] = w;
        if(i==ei && j==ej && s==1){
            printf("%d",w);
            return 0;
        }
        for(k=0;k<4;k++){
            ni = i+di[k];
            nj = j+dj[k];
            if(ni==0 || ni>n || nj==0 || nj>n) continue;
            if(a[ni][nj]<0) pq.push({ni,nj,w-a[ni][nj],s^1});
            else pq.push({ni,nj,w+a[ni][nj],s});
        }
    }
    return 0;
}
/*
4
1 1 9 1
1 4 1 -3
1 9 2 1
1 1 3 1
3 2 3 3
*/
