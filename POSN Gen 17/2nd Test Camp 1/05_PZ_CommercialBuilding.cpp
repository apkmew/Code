/*
    TASK : PZ_Commercial Building
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
int a[100100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,j,q,n,m,ans;
    cin >> q;
    while(q--){
        ans = 0;
        cin >> n >> m;
        for(i=1;i<=n;i++){
            cin >> a[i];
            a[i] += a[i-1];
        }
        j = 1;
        for(i=1;i<=n;i++){
            for(;j<=n;j++){
                
            }
        }
    }
    return 0;
}