/*
    Task	: E_DarkRoads
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 30 December 2022 [16:26]
    Algo	: MST
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int u,v,w;
    bool operator<(const A&o) const{
        return w<o.w;
    }
};
A a[200100];
int p[200100];
int fr(int i){
    if(p[i]==i) return i;
    return p[i] = fr(p[i]);
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int m,n,i,total,use;
    while(1){
        total = 0, use = 0;
        cin >> m >> n;
        if(m==0 && n==0) break;
        for(i=0;i<n;i++){
            cin >> a[i].u >> a[i].v >> a[i].w;
            total += a[i].w;
        }
        for(i=0;i<m;i++) p[i] = i;
        sort(a,a+n);
        for(i=0;i<n;i++){
            if(fr(a[i].u)!=fr(a[i].v)){
                p[fr(a[i].u)] = fr(a[i].v);
                use += a[i].w;
            }
        }
        cout << total-use << "\n";
    }
    return 0;
}
/*
7 11
0 1 7
0 3 5
1 2 8
1 3 9
1 4 7
2 4 5
3 4 15
3 5 6
4 5 8
4 6 9
5 6 11
0 0
*/