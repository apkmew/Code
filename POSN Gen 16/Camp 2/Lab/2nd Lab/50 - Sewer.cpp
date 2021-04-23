/*
    TASK: Sewer
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int mark[10100],last[10100];
vector<int> g[10100];
queue<int> bfs;
int main()
{
    memset(last,-1,sizeof last);
    int a,b,i,j,d,r,h,x,cnt=0,cou=0,time=0,bf=-1,ans;
    char c;
    scanf("%d %d",&a,&b);
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            h = (i*b) + (j%b);
            r = h + 1;
            d = h + b;
            scanf(" %c",&c);
            if(c=='N') continue;
            else if(c=='B'){
                if(j<b-1){
                    g[h].push_back(r);
                    g[r].push_back(h);
                }
                if(i<a-1){
                    g[h].push_back(d);
                    g[d].push_back(h);
                }
            }
            else if(c=='R'){
                if(j<b-1){
                    g[h].push_back(r);
                    g[r].push_back(h);
                }
            }
            else if(c=='D'){
                if(i<a-1){
                    g[h].push_back(d);
                    g[d].push_back(h);
                }
            }
        }
    }
    bfs.push(0);
    while(1){
        x = bfs.front();
        if(mark[x]==1){
            ans = x;
            while(last[x]!=-1){
                cnt++;
                x = last[x];
            }
            printf("%d\n",cnt+1);
            printf("%d %d\n",(ans/b)+1,(ans%b)+1);
            return 0;
        }
        mark[x] = 1;
        bfs.pop();
        for(i=0;i<g[x].size();i++){
            if(g[x][i]==last[x]) continue;
            bfs.push(g[x][i]);
            last[g[x][i]] = x;
        }
    }
    return 0;
}
/*
4 4
B R D N
D R B D
R R R D
N N N N
3 4
B B B D
D N R B
R R R N
*/
