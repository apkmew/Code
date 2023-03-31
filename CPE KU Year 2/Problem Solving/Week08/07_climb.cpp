/*
    Task	: 07_climb
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 02 March 2023 [16:42]
    Algo	: BFS
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
char a[50][50];
int dis[50][50],di[]={0,0,1,-1},dj[]={1,-1,0,0};
queue<pair<int,int> > bfs;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int h,w,i,j,k;
    cin >> h >> w;
    for(i=h;i>0;i--){
        for(j=1;j<=w;j++){
            cin >> a[i][j];
            dis[i][j] = -1;
        }
    }
    dis[1][1] = 0;
    bfs.push({1,1});
    while(!bfs.empty()){
        i = bfs.front().first;
        j = bfs.front().second;
        bfs.pop();
        for(k=0;k<4;k++){
            int ii = i+di[k], jj = j+dj[k];
            int now = dis[i][j];
            int next;
            if(k==0 || k==1) next = now+1;
            else if(k==2) next = now+5;
            else if(k==3) next = now;
            if(ii<1 || ii>h || jj<1 || jj>w) continue;
            if(a[ii][jj]=='X') continue;
            if(dis[ii][jj]==-1 || dis[ii][jj]>next){
                dis[ii][jj] = next;
                bfs.push({ii,jj});
            }
        }
    }
    cout << dis[h][w] << "\n";
//    for(i=h;i>0;i--){
//        for(j=1;j<=w;j++){
//            cout << dis[i][j] << " ";
//        }
//        cout << "\n";
//    }
    return 0;
}
/*
4 5
...X.
...X.
...X.
.X... 
6 4
....
....
....
....
....
....
4 5
...X.
...X.
...XX
.X... 
6 7
...XXX.
.X.X...
.X...XX
..X....
...XXX.
.X.....
*/