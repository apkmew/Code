/*
    TASK: Slikar
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,j,arai;
};
queue<A> bfs;
int di[4]={0,0,1,-1},dj[4]={1,-1,0,0},dis[1010][1010];
char a[1010][1010];
int main()
{
    int r,c,i,j,si,sj,ei,ej,now,k,ii,jj;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf(" %c",&a[i][j]);
            if(a[i][j]=='S') si=i,sj=j;
            if(a[i][j]=='D') ei=i,ej=j;
            if(a[i][j]=='*') bfs.push({i,j,1});
        }
    }
    memset(dis,-1,sizeof dis);
    dis[si][sj] = 0;
    bfs.push({si,sj,2});
    while(!bfs.empty()){
        i=bfs.front().i,j=bfs.front().j,now=bfs.front().arai;
        bfs.pop();
        if(i==ei&&j==ej&&now==2){
            printf("%d\n",dis[ei][ej]);
            return 0;
        }
        for(k=0;k<4;k++){
            ii=i+di[k], jj=j+dj[k];
            if(ii<0 || ii>=r || jj<0 || jj>=c) continue;
            if(a[ii][jj]=='X' || a[ii][jj]=='*') continue;
            if(a[ii][jj]=='D' && now==1) continue;
            if(dis[ii][jj]!=-1) continue;
            dis[ii][jj] = dis[i][j]+1;
            bfs.push({ii,jj,now});
        }
    }
    printf("KAKTUS\n");
    return 0;
}
/*
3 3
D.*
...
..S
3 6
D...*.
.X.X..
....S.
*/
