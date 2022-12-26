/*
    Task	: 08_ku01_under
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 26 December 2022 [14:47]
    Algo	: Dynamic Programming - Quick Sum
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int a[500];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int l,n,i,u,v,mx;
    cin >> l >> n;
    while(n--){
        cin >> u >> v;
        a[u]++;
        a[v]--;
    }
    mx = a[0];
    for(i=1;i<=l;i++){
        a[i] += a[i-1];
        mx = max(mx,a[i]);
    }
    cout << mx;
    return 0;
}
/*
20 5
1 6
1 8
6 12
7 14
15 20
*/