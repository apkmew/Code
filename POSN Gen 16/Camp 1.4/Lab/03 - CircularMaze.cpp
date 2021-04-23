/*
    TASK: Circular Maze
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
    int r,c,i,j,sti,stj,eni,enj,ii,jj,k;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf(" %c",&a[i][j]);
            if(a[i][j]=='S'){
                sti = i;
                stj = j;
            }
            if(a[i][j]=='E'){
                eni = i;
                enj = j;
            }
        }
    }
    memset(dis,-1,sizeof dis);
    dis[sti][stj] = 0;
    bfs.push({sti,stj});
    while(!bfs.empty()){
        i = bfs.front().first, j = bfs.front().second;
        bfs.pop();
        for(k=0;k<4;k++){
            ii = (i+di[k]+r)%r, jj = (j+dj[k]+c)%c;
            if(dis[ii][jj]!=-1) continue;
            if(a[ii][jj]=='#') continue;
            dis[ii][jj] = dis[i][j]+1;
            bfs.push({ii,jj});
        }
    }
    i = eni,j = enj;
    while(!(i==sti&&j==stj)){
        for(k=0;k<4;k++){
            ii = (i+di[k]+r)%r, jj = (j+dj[k]+c)%c;
            if(dis[ii][jj]==-1) continue;
            if(a[ii][jj]=='#') continue;
            if(dis[ii][jj]==dis[i][j]-1){
                i=ii,j=jj; a[i][j]='x'; break;
            }
        }
    }
    a[sti][stj]='S',a[eni][enj]='E';
    for(i=0;i<r;i++)
        printf("%s\n",a[i]);
    return 0;
}
/*
6 12
####.#..####
.S.#..#.#E##
#.#...#.#..#
..##..#..#..
.#.#.#.###.#
.........###
*/
