/*
    Task	: 07_mid59_jumpgame
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 25 January 2023 [00:06]
    Algo	: BFS
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int a[30][30],mark[30][30],di[]={-1,0,1,0},dj[]={0,1,0,-1};
queue<pair<int,int> > bfs;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,k,i,j,l,ii,jj;
    cin >> n >> k;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    bfs.push({0,0});
    while(!bfs.empty()){
        i = bfs.front().first;
        j = bfs.front().second;
        bfs.pop();
        mark[i][j] = 1;
        if(i==n-1 && j==n-1){
            cout << "yes\n";
            return 0;
        }
        for(l=0;l<4;l++){
            ii = i+di[l]; jj = j+dj[l];
            if(ii<0 || ii>=n || jj<0 || jj>=n) continue;
            if(mark[ii][jj]) continue;
            if(a[ii][jj] - a[i][j] > k) continue;
            bfs.push({ii,jj});
        }
    }
    cout << "no\n";
    return 0;
}