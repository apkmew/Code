/*
    TASK: Nearest Walk
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;
queue<PII> bfs;
int di[4]={0,0,1,-1},dj[4]={1,-1,0,0},dis[1010][1010];
char a[1010][1010];
int main()
{
    int q,r,c,i,j,sti,stj,eni,enj,ii,jj,k;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&r,&c);
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                scanf(" %c",&a[i][j]);
                if(a[i][j]=='A'){
                    sti = i;
                    stj = j;
                }
                if(a[i][j]=='B'){
                    eni = i;
                    enj = j;
                }
            }
        }
        bfs.push(make_pair(sti,stj));
        memset(dis,-1,sizeof dis);
        dis[sti][stj] = 0;
        while(!bfs.empty()){
            i = bfs.front().first, j = bfs.front().second;
            bfs.pop();
            for(k=0;k<4;k++){
                ii = i+di[k], jj = j+dj[k];
                if(ii<0 || jj<0 || ii>=r || jj>=c) continue;
                if(dis[ii][jj]!=-1) continue;
                if(a[ii][jj]=='#') continue;
                dis[ii][jj] = dis[i][j]+1;
                bfs.push(make_pair(ii,jj));
            }
        }
        printf("%d\n",dis[eni][enj]);
        while(!bfs.empty())
            bfs.pop();
    }
    return 0;
}
/*
2
4 5
#A.#.
..#.B
.#..#
....#
4 5
#A.#.
..#.B
.#..#
..#.#
*/
