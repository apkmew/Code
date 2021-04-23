/*
    TASK: UpKahn
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>, greater<int>> h;
vector<int> g[100100],ans;
int in[100100];
int main()
{
    int q,n,m,u,v,cnt,i;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&n,&m);
        while(m--){
            scanf("%d %d",&u,&v);
            g[u].push_back(v); in[v]++;
        }
        for(i=1;i<=n;i++)
            if(in[i]==0)
                h.push(i);
        while(!h.empty()){
            i = h.top();
            h.pop();
            ans.push_back(i);
            for(auto x:g[i]){
                in[x]--;
                if(in[x]==0)
                    h.push(x);
            }
        }
        if(ans.size()==n){
            printf("Yes");
            for(i=0;i<n;i++)
                printf(" %d",ans[i]);
            printf("\n");
        }
        else
            printf("No\n");
        for(i=1;i<=n;i++)
            g[i].clear();
        while(!h.empty())
            h.pop();
        memset(in,0,sizeof in);
        ans.clear();
    }
    return 0;
}
/*
2
5 5
1 2
1 3
2 4
3 5
4 5
5 6
1 2
1 3
2 4
3 5
4 5
4 1
*/
