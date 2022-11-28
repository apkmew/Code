#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,k,t,now=0,ans=0;
    cin >> n >> k >> t;
    t--;
    do{
        ans++;
        now = (now + k)%n;
    }while(now != 0 && now != t);
    if(now == t) ans++;
    cout << ans;
    return 0;
}