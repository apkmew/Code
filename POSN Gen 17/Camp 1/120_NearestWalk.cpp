/*
    TASK : Nearest Walk
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
queue<pair<int,int> > bfs;
int dis[1010][1010],di[]={1,-1,0,0},dj[]={0,0,1,-1};
char a[1010][1010];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,j,ii,jj,q,n,m,sti,stj,eni,enj;
    cin >> q;
    while(q--){
        cin >> n >> m;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin >> a[i][j];
                if(a[i][j]=='A'){ sti = i; stj = j; }
                if(a[i][j]=='B'){ eni = i; enj = j; }
            }
        }
        //cout << sti << " " << stj << "\n";
        //cout << eni << " " << enj << "\n";
        bfs.push(make_pair(sti,stj));
        memset(dis,-1,sizeof dis);
        dis[sti][stj] = 0;
        while(!bfs.empty()){
            i = bfs.front().first; j = bfs.front().second;
            bfs.pop();
            for(int k=0;k<4;k++){
                ii = i + di[k]; jj = j + dj[k];
                if(ii<0 || jj<0 || ii>=n || jj>=m) continue;
                if(dis[ii][jj]!=-1) continue;
                if(a[ii][jj]=='#') continue;
                dis[ii][jj] = dis[i][j]+1;
                bfs.push(make_pair(ii,jj));
            }
        }
        cout << dis[eni][enj] << "\n";
        while(!bfs.empty()) bfs.pop();
    }
    return 0;
}
/*
2
4 5
#A.#.
..#.B
.#..#
....#
4 5
#A.#.
..#.B
.#..#
..#.#
*/