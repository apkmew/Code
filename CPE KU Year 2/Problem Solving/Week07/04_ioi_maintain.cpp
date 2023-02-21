/*
    Task	: 04_ioi_maintain
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 21 February 2023 [09:55]
    Algo	: MST
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int u,v,w;
};
A a[6010];
int p[210];
int ch[210];
int fr(int i){
    if(p[i]==i) return i;
    return p[i] = fr(p[i]);
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,m,i,j,ans,cou,root;
    cin >> n >> m;
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++) p[j] = j;
        ans = 0; cou = 0;
        cin >> a[i-1].u >> a[i-1].v >> a[i-1].w;
        for(j=i-1;j>0;j--){
            if(a[j].w < a[j-1].w) swap(a[j],a[j-1]);
            else break;
        }
        for(j=0;j<i;j++){
            if(fr(a[j].u)!=fr(a[j].v)){
                p[fr(a[j].u)] = fr(a[j].v);
                ans += a[j].w;
                if(ch[a[j].u] != i){
                    ch[a[j].u] = i;
                    cou++;
                }
                if(ch[a[j].v] != i){
                    ch[a[j].v] = i;
                    cou++;
                }
            }
        }
        root = fr(1);
        for(j=2;j<=n;j++){
            if(fr(j)!=root) cou = -1;
        }
        if(cou!=n) cout << "-1\n";
        else cout << ans << "\n";
    }
    return 0;
}
/*
4 6
1 2 10
1 3 8
3 2 3
1 4 3
1 3 6
2 1 2
*/