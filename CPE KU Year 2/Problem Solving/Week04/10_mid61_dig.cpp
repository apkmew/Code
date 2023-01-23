/*
    Task	: 10_mid61_dig
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 23 January 2023 [13:40]
    Algo	: BFS
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
char a[60][60];
int di[] = {-1,0,1,0}, dj[] = {0,1,0,-1}, mark[60][60][5][5];
struct A{
    int i,j,dig,dis,dir;    // dir = 1 : up-down, 2 : left-right
};
queue<A> bfs;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int r,c,i,j,si,sj,ei,ej;
    cin >> r >> c;
    cin >> si >> sj >> ei >> ej;
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            cin >> a[i][j];
        }
    }
    bfs.push({si,sj,1,0,0});
    while(!bfs.empty()){
        auto now = bfs.front();
        //cout << now.i << " " << now.j << " " << now.dig << " " << now.dis << " " << now.dir << "\n";
        //cout << "\n";
        bfs.pop();
        if(mark[now.i][now.j][now.dir][now.dig]==1) continue;
        mark[now.i][now.j][now.dir][now.dig] = 1;
        if(now.i==ei && now.j==ej){
            cout << now.dis << "\n";
            return 0;
        }
        for(i=0;i<4;i++){
            int ni = now.i+di[i],nj = now.j+dj[i];
            int newdir;
            if(ni==now.i) newdir = 2;
            else newdir = 1;
            if(a[now.i][now.j]=='*' && now.dir!=newdir) continue;
            if(a[ni][nj]=='#') continue;
            if(a[ni][nj]=='.'){
                bfs.push({ni,nj,now.dig,now.dis+1,newdir});
            }
            if(a[ni][nj]=='*' && now.dig==1){
                bfs.push({ni,nj,0,now.dis+1,newdir});
            }
        }
    }
    cout << "-1\n";
    return 0;
}
/*
6 5
2 2 4 2
#####
#...#
#**.#
#.*.#
#...#
#####
*/