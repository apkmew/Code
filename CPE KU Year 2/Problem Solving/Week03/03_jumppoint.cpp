/*
    Task	: 03_jumppoint
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 26 December 2022 [13:34]
    Algo	: Graph - Unweighted Shortest Path
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[1010];
pair<int,int> a[1010];
queue<int> q;
int dis[1010];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,j,n,r;
    cin >> n >> r;
    for(i=0;i<n;i++){
        cin >> a[i].first >> a[i].second;
    }
    a[n].first = 0; a[n].second = 0;
    a[n+1].first = 100; a[n+1].second = 100;
    for(i=0;i<n+2;i++){
        for(j=i+1;j<n+2;j++){
            if(r*r >= (a[i].first-a[j].first)*(a[i].first-a[j].first)+(a[i].second-a[j].second)*(a[i].second-a[j].second)){
                g[i].push_back(j);
                g[j].push_back(i);
                //cout << a[i].first << " " << a[i].second << " <-> " << a[j].first << " " << a[j].second << "\n";
            }
        }
    }
    dis[n] = 0;
    dis[n+1] = -1;
    q.push(n);
    while(!q.empty()){
        int now = q.front();
        q.pop();
        //cout << now << " " << dis[now] << " " << a[now].first << " " << a[now].second << "\n";
        for(auto x:g[now]){
            if(dis[x] && dis[x]!=-1) continue;
            dis[x] = dis[now]+1;
            q.push(x);
        }
    }
    cout << dis[n+1] << "\n";
    return 0;
}
/*
5 50
50 0
100 0
100 50
50 30
70 50
*/