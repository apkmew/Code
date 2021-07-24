/*
    Task	: 026_PeattPacman
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 08 May 2021 [22:06]
    Algo	: BFS
    Status	: Debug
*/
#include<bits/stdc++.h>
using namespace std;
char a[750][750];
struct A{
    int i,j,type,t;
};
queue<A> bfs;
struct B{
    int t,i,j;
    bool operator<(const B& o)const{
        return t>o.t;
    }
};
priority_queue<B> pac;
int di[]={1,-1,0,0},dj[]={0,0,1,-1};
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int r,c,i,j,si,sj,t,q,time,n,k,ii,jj,type,tt,mx;
    cin >> q;
    while(q--){
        mx = 0;
        cin >> r >> c >> n >> t >> si >> sj;
        for(i=0;i<n;i++){
            cin >> time >> i >> j;
            pac.push({time,i,j});
        } 
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                cin >> a[i][j];
            }
        }
        for(time=0;time<=t+1;time++){
            if(time==0) bfs.push({si,sj,1,time+1});
            while(time==pac.top().t){
                i = pac.top().i; j = pac.top().j;
                pac.pop();
                if(a[i][j]!='*'){
                    a[i][j] = '*';
                    bfs.push({i,j,2,time+1});
                }
                if(i==si && j==sj && time==0){
                    cout << "NO -1\n";
                    goto next;
                }
            }
            while(!bfs.empty()&&bfs.front().t==time){
                i = bfs.front().i; j = bfs.front().j;
                type = bfs.front().type; tt = bfs.front().t;
                bfs.pop();
                if(type==1){
                    if(a[i][j]=='*') continue;
                    if(time==t+1){
                        cout << "YES\n";
                        goto next;
                    }
                    else bfs.push({i,j,1,time+1});
                    for(k=0;k<4;k++){
                        ii = i + di[k]; jj = j + dj[k];
                        if(ii<0 || ii>=r || jj<0 || jj>=c) continue;
                        if(a[ii][jj]=='#' || a[ii][jj]=='*') continue;
                        bfs.push({ii,jj,1,time+1});
                        mx = max(mx,time);
                    }
                }
                if(type==2){
                    if(a[i][j]=='*') continue;
                    else bfs.push({i,j,2,time+1});
                    a[i][j] = '*';
                    for(k=0;k<4;k++){
                        ii = i + di[k]; jj = j + dj[k];
                        ii = i + di[k]; jj = j + dj[k];
                        if(ii<0 || ii>=r || jj<0 || jj>=c) continue;
                        if(a[ii][jj]=='#' || a[ii][jj]=='*') continue;
                        bfs.push({ii,jj,2,time+1});
                    }
                }
            }
        }
        cout << "NO " << mx << "\n";
        next:;
        while(!bfs.empty()){
            bfs.pop();
        }
        while(!pac.empty()){
            pac.pop();
        }
    }
    return 0;
}
/*
4
2 5 1 1 0 2
1 0 2
.....
.....
2 5 1 1 0 2
0 0 2
.....
......
2 5 4 1 0 2
1 0 2
1 0 3
1 0 1
1 1 2
.....
.....
5 5 2 10 2 2
0 0 0
0 4 4
.....
.###.
.#.#.
.###.
.....
*/