/*
    TASK: Robot
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[2010][2010],x[110][5],y[110][5],di[]={1,-1,0,0},dj[]={0,0,-1,1};
queue<pair<int,int> > bfs;
int main()
{
    int i,j,k,ii,jj,xx,yy,n,m,cntx=0,cnty=0,ans1=0,ans2=0;
    char c;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf(" %c",&c);
            if(c=='A') a[i][j] = 2e9, y[cnty][0] = i, y[cnty][1] = j, cnty++;
            else if(c=='W') a[i][j] = -1;
            else if(c=='E') a[i][j] = 2e9;
            else if(c=='X') a[i][j] = 0, x[cntx][0] = i, x[cntx][1] = j, cntx++;
        }
    }
    for(i=0;i<cntx;i++){
        bfs.push({x[i][0],x[i][1]});
    }
    while(!bfs.empty()){
        xx = bfs.front().first, yy = bfs.front().second;
        bfs.pop();
        for(k=0;k<4;k++){
            ii = xx + di[k], jj = yy + dj[k];
            if(ii<0 || ii>=n || jj<0 || jj>=m) continue;
            if(a[ii][jj]==-1) continue;
            if(a[ii][jj]==a[xx][yy]+1) continue;
            a[ii][jj] = min(a[ii][jj],a[xx][yy]+1);
            if(a[ii][jj]==a[xx][yy]+1) bfs.push({ii,jj});
        }
    }
    for(i=0;i<cnty;i++){
        if(a[y[i][0]][y[i][1]]!=2e9){
            ans1++;
            ans2 += a[y[i][0]][y[i][1]];
        }
    }
    printf("%d %d",ans1,ans2*2);
    return 0;
}
/*
5 5
WEEEE
AWAEW
WEEWW
WEEXE
WWEEE
*/
