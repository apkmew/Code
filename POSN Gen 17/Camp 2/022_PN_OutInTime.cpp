/*
    Task	: 022_PN_OutInTime
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 08 May 2021 [15:42]
    Algo	: BFS
    Status	: Incomplete
*/
#include<bits/stdc++.h>
using namespace std;
char a[50][50];
int dis[50][50],di[]={1,-1,0,0},dj[]={0,0,1,-1};
struct A{
    int i,j,t,cou;
};
queue<A> bfs;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int q,r,c,t,si,sj,ei,ej,i,j,k,ii,jj,n,cou,mx;
    cin >> q;
    while (q--)
    {
        mx = -1;
        memset(dis,-1,sizeof dis);
        cin >> r >> c >> t;
        for(i=1;i<=r;i++){
            for(j=1;j<=c;j++){
                cin >> a[i][j];
            }
        }
        cin >> si >> sj >> ei >> ej;
        dis[si][sj] = 0;
        bfs.push({si,sj,0,1});
        while(!bfs.empty()){
            i = bfs.front().i; j = bfs.front().j; n = bfs.front().t; cou = bfs.front().cou;
            bfs.pop();
            
            if(i==ei && j==ej){
                cout << i << " " << j << " " << n << " " << cou << "\n";
                mx = max(mx,cou);
            } 
            if(n+1>t) continue;
            for(k=0;k<4;k++){
                ii = i+di[k]; jj = j+dj[k];
                if(ii<1 || ii>r || jj<1 || jj>c) continue;
                if(a[ii][jj]=='#') continue;
                if(dis[ii][jj]>=cou+1) continue;
                //if(dis[ii][jj]==-1) cou++;
                dis[ii][jj] = ++cou;
                bfs.push({ii,jj,n+1,cou});
            }
        }
        cout << dis[ei][ej] << "\n";
    }
    return 0;
}
/*
3
5 8 9
#..#..#.
.#...##.
##.##..#
...##.##
##.#..##
4 3 2 4
4 5 100
.....
.####
...#.
#.##.
3 3 1 3
3 5 2
.....
.####
.....
3 3 1 3
*/