/*
    Task	: mid66_horsejump
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 22 January 2024 [15:25]
    Algo	: BFS
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int i, j, jump, dis; // jump = 0 -> can jump, jump = 1 -> can't jump
};
char a[510][510];
queue<A> bfs;
int di[] = { -1, 1,  0, 0 }; // walk i
int dj[] = {  0, 0, -1, 1 }; // walk j
int hi[] = { -2, -2, -1, -1,  1, 1,  2, 2 }; // jump i
int hj[] = { -1,  1, -2,  2, -2, 2, -1, 1 }; // jump j
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
        if( now.i == n && now.j == n ){ // reach destination
            cout << now.dis << "\n";    // print answer
            return 0;                   // end program
        }
        for( int k = 0; k < 4; k++ ){ // walk
            int ii = now.i + di[k], jj = now.j + dj[k];             // new i, new j
            if( ii < 1 || jj < 1 || ii > n || jj > n ) continue;    // out of bound
            if( a[ii][jj] == '#' ) continue;                        // can't walk on #
            if( dis[ii][jj][now.jump] ) continue;                   // visited
            dis[ii][jj][now.jump] = now.dis+1;                      // mark visited
            bfs.push({ii,jj,now.jump,now.dis+1});                   // push to queue
        }
        if( now.jump ) continue;    // can't jump
        for( int k = 0; k < 8; k++ ){ // jump
            int ii = now.i + hi[k], jj = now.j + hj[k];             // new i, new j
            if( ii < 1 || jj < 1 || ii > n || jj > n ) continue;    // out of bound
            if( a[ii][jj] == '#' ) continue;                        // can't walk on #
            if( dis[ii][jj][1] ) continue;                          // visited
            dis[ii][jj][1] = 1;                                     // mark visited
            bfs.push({ii,jj,1,now.dis+1});                          // push to queue
        }
    }
    return 0;
}