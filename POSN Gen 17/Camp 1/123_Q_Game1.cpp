/*
    TASK : Q_Game 1
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
struct A{
    int i,j,st,arai;
};
queue<A> bfs;
int a[510][510],di[]={1,0},dj[]={0,1},mark[510][510][5],t[1010][5];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int h,w,i,j,cou=0,now,ii,jj,tt,mx=-1;
    cin >> h >> w;
    for(i=h;i>0;i--){
        for(j=1;j<=w;j++){
            cin >> a[i][j];
        }
    }
    bfs.push({1,1,0,1});
    bfs.push({1,1,0,2});
    while(!bfs.empty()){
        i = bfs.front().i; j = bfs.front().j; tt = bfs.front().st; now = bfs.front().arai;
        mx = max(mx,tt);
        t[tt][now]++;
        bfs.pop();
        for(int k=0;k<2;k++){
            ii = i + di[k]; jj = j + dj[k];
            if(ii>h || jj>w) continue;
            if(a[ii][jj]==1) continue;
            if(mark[ii][jj][now]) continue;
            mark[ii][jj][now] = 1;
            bfs.push({ii,jj,tt+1,now});
        }
    }
    for(i=0;i<=mx;i++){
        //cout << t[i][1]  << " " << t[i][2] << "\n";
        cou += t[i][1]*t[i][2];
    } 
    cout << cou;
    return 0;
}
/*
2 4
0 0 0 0
0 0 1 0
5 5 
0 1 0 1 0
1 0 0 0 0
1 1 0 1 0
0 1 1 0 0
0 0 0 0 1
*/