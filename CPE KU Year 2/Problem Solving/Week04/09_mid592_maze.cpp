/*
    Task	: 09_mid592_maze
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 23 January 2023 [13:18]
    Algo	: BFS
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
char a[30][30];
int di[] = {-1,0,1,0}, dj[] = {0,1,0,-1}, mark[30][30];
struct A{
    int i,j,key;
};
queue<A> bfs;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,q,i,j,si,sj,ei,ej,cou=0;
    cin >> n >> q;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin >> a[i][j];
        }   
    }
    while(q--){
        cou++;
        cin >> si >> sj >> ei >> ej;
        bfs.push({si,sj,1});
        while(!bfs.empty()){
            auto now = bfs.front();
            bfs.pop();
            if(mark[now.i][now.j]==cou) continue;
            mark[now.i][now.j] = cou;
            if(now.i==ei && now.j==ej){
                cout << "yes\n";
                goto next;
            }
            for(i=0;i<4;i++){
                int ni = now.i+di[i], nj = now.j+dj[i];
                if(ni<=0 || nj<=0 || ni>n || nj>n) continue;
                if(a[ni][nj]=='#') continue;
                if(a[ni][nj]=='.'){
                    bfs.push({ni,nj,now.key});
                }
                if(a[ni][nj]=='O' && now.key==1){
                    bfs.push({ni,nj,0});
                }
            }
        }
        cout << "no\n";
        next:;
        while(!bfs.empty()) bfs.pop();
    }
    return 0;
}
/*
7 4
#.#....
..#####
#......
#.#O###
#.#..#.
#.##O##
#.#....
2 1 3 7
2 1 5 4
2 1 1 6
2 1 7 6
6 2
...#.#
.###.#
......
####.#
..#..#
...#..
1 3 5 5
1 5 5 1
*/