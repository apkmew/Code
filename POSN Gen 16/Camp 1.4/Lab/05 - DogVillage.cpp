/*
    TASK: Dog Village
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int i,j,w;
};
int a[1010][1010],mark[1010][1010],di[4]={1,-1,0,0},dj[4]={0,0,1,-1};
queue<A> bfs;
int main()
{
    int r,c,i,j,ans,ii,jj,k,w;
    scanf("%d %d",&r,&c);
    ans = r*c;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==0)
            bfs.push({i,j,0}),mark[i][j]=1,ans--;
        }
    }
    while(!bfs.empty()){
        i=bfs.front().i,j=bfs.front().j,w=bfs.front().w;
        bfs.pop();
        for(k=0;k<4;k++){
            ii=i+di[k],jj=j+dj[k];
            if(ii<0 || ii>=r || jj<0 || jj>=c) continue;
            if(mark[ii][jj]) continue;
            if(a[ii][jj] <= w+1) continue;
            mark[ii][jj] = 1;
            ans--;
            bfs.push({ii,jj,w+1});
        }
    }
    printf("%d\n",ans);
    return 0;
}
/*
4 4
0 1 3 2
4 3 1 1
2 0 1 1
0 4 1 9
*/
