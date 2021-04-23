/*
    TASK: 48_Fight
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int mark[100100],colo[100100],a[300100][5];
vector<int> g[100100];
int play(int u,int now){
    if(mark[u]==1 && colo[u]==now) return 1;
    if(mark[u]==1 && colo[u]!=now) return 0;
    mark[u] = 1, colo[u] = now;
    for(auto x: g[u]){
        if(play(x,3-now)==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n,m,l,r,mid,ch,u,v,i;
    scanf("%d %d",&n,&m);
    for(i=1;i<=m;i++){
        scanf("%d %d",&a[i][0],&a[i][1]);
    }
    l = 1, r = m;
    //printf("=========\n");
    while(l<r){
        //printf("%d %d\n",l,r);
        mid = (l+r+1)/2;
        for(i=1;i<=l;i++){
            u = a[i][0], v = a[i][1];
            g[u].push_back(v);
            g[v].push_back(u);
        }
        for(i=1,ch=1;i<=n;i++){
            if(!mark[i]){
                if(play(i,1)==0){
                    ch = 0; break;
                }
            }
        }
        if(ch==0) r = mid - 1;
        else      l = mid;
        memset(mark,0,sizeof mark);
        memset(colo,0,sizeof colo);
        for(i=1;i<=n;i++){
            g[i].clear();
        }
    }
    printf("%d",l);
    return 0;
}
/*
6 8
3 4
1 2
5 6
1 6
1 3
4 5
2 4
2 6
*/
