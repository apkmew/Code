/*
    TASK : Slikar
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
struct A{
    int i,j,arai;
};

queue<A> bfs;
int di[]={1,-1,0,0},dj[]={0,0,1,-1},dis[60][60];
char a[60][60];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int r,c,i,j,si,sj,ei,ej,now,ii,jj;
    cin >> r >> c;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin >> a[i][j];
            switch(a[i][j]){
                case 'S': si = i; sj = j; break;
                case 'D': ei = i; ej = j; break;
                case '*': bfs.push({i,j,1}); break;
            }
        }
    }
    //cout << si << " " << sj << "\n";
    //cout << ei << " " << ej << "\n";
    memset(dis,-1,sizeof dis);
    dis[si][sj] = 0;
    bfs.push({si,sj,2});
    while(!bfs.empty()){
        i = bfs.front().i; j = bfs.front().j; now = bfs.front().arai;
        bfs.pop();
        if(i==ei && j==ej && now==2){
            cout << dis[ei][ej] << "\n";
            return 0;
        }
        for(int k=0;k<4;k++){
            ii = i + di[k]; jj = j + dj[k];
            //cout << ii << " " << jj << " " << now << "\n";
            if(ii<0 || jj<0 || ii>=r || jj>=c) continue;
            if(a[ii][jj]=='X' || a[ii][jj]=='*') continue;
            if(a[ii][jj]=='D' && now==1) continue;
            if(dis[ii][jj]!=-1) continue;
            dis[ii][jj] = dis[i][j] + 1;
            //cout << i << " " << j << " " << now << "\n";
            bfs.push({ii,jj,now});
        }
    }
    cout << "KAKTUS\n";
    return 0;
}
/*
3 3
D.*
...
..S
3 6
D...*.
.X.X..
....S.
*/ 