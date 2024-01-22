/*
    Task	: Test
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 22 January 2024 [15:05]
    Algo	: 
    Status	: 
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int i, j, jump, dis;
};
char a[510][510];
queue<A> bfs;
int di[] = { -1, 1, 0, 0 };
int dj[] = { 0, 0, -1, 1 };
int hi[] = { -2, -2, -1, -1, 1, 1, 2, 2 };
int hj[] = { -1, 1, -2, 2, -2, 2, -1, 1 };
int dis[510][510][3];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n;
    cin >> n;
    for( int i = 1; i <= n; i++ ){
        for( int j = 1; j <= n; j++ ){
            cin >> a[i][j];
        }
    }
    bfs.push({1,1,0,0});
    while( !bfs.empty() ){
        auto now = bfs.front();
        bfs.pop();
        if( now.i == n && now.j == n ){
            cout << now.dis << "\n";
            return 0;
        }
        for( int k = 0; k < 4; k++ ){
            int ii = now.i + di[k], jj = now.j + dj[k];
            if( ii < 1 || jj < 1 || ii > n || jj > n ) continue;
            if( a[ii][jj] == '#' ) continue;
            if( dis[ii][jj][now.jump] ) continue;
            dis[ii][jj][now.jump] = now.dis+1;
            bfs.push({ii,jj,now.jump,now.dis+1});
        }
        if( now.jump ) continue;
        for( int k = 0; k < 8; k++ ){
            int ii = now.i + hi[k], jj = now.j + hj[k];
            if( ii < 1 || jj < 1 || ii > n || jj > n ) continue;
            if( a[ii][jj] == '#' ) continue;
            if( dis[ii][jj][1] ) continue;
            dis[ii][jj][1] = 1;
            bfs.push({ii,jj,1,now.dis+1});
        }
    }
    return 0;
}