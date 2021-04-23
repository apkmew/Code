/*
    TASK: Peat Road Build
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > g[1010];
int main()
{
    int n,m,a,b,c;
    scanf("%d %d",&n,&m);
    while(m--){
        scanf("%d %d %d",&a,&b,&c);
        g[a].push_back({b,c});
        g[b].push_back({a,c});
    }
    return 0;
}
