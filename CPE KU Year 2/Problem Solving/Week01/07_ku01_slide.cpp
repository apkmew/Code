#include <bits/stdc++.h>
using namespace std;
int a[50];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,i,j,ans=0;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a[i];
        for(j=0;j<i;j++){
            if(a[j] < a[i]) ans++;
        }
    }
    cout << ans;
    return 0;
}