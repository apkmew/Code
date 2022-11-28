#include <bits/stdc++.h>
using namespace std;
long long a[100100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    long long n,k,i,mn=2e9,end,now,ans=0;
    cin >> n >> k;
    for(i=1;i<=n;i++){
        cin >> a[i];
        mn = min(mn,a[i]);
    }
    end = mn*k;
    for(i=1;i<=n;i++){
        now = a[i]*(k-1);
        if(end > now) ans++;
    }
    cout << ans;
    return 0;
}