/*
    Task	: 01_mid65_countries
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 30 January 2023 [13:10]
    Algo	: BFS
    Status	: Complted
*/
#include<bits/stdc++.h>
using namespace std;
int arr[40][40],di[]={-1,0,1,0},dj[]={0,1,0,-1},dis[40][40],mark[40][40][1000];
struct A{
    int i,j,visa;
};
queue<A> bfs;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int r,c,a,b,x,y,i,j,visa,ii,jj,mn=2e9,k;
    cin >> r >> c >> a >> b >> x >> y;
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            cin >> arr[i][j];
        }
    }
    bfs.push({a,b,0});
    while(!bfs.empty()){
        i = bfs.front().i;
        j = bfs.front().j;
        visa = bfs.front().visa;
        //cout << i << " " << j << " " << visa << "\n";
        bfs.pop();
        if(dis[i][j] != 0 && dis[i][j] <= visa) continue;
        if(mark[i][j][visa] == 1) continue;
        dis[i][j] = visa;
        mark[i][j][visa] = 1;
        if(i == x && j == y){
            mn = min(mn,visa);
            continue;
        }
        for(k=0;k<4;k++){
            ii = i+di[k]; jj = j+dj[k];
            int newvisa = visa;
            if(arr[ii][jj] != arr[i][j]) newvisa++;
            if(ii<1 || ii>r || jj<1 || jj>c) continue;
            if(dis[ii][jj] != 0 && dis[ii][jj] <= newvisa) continue;
            if(mark[ii][jj][newvisa] == 1) continue;
            bfs.push({ii,jj,newvisa});
        }
    }
    cout << mn << "\n";
    return 0;
}