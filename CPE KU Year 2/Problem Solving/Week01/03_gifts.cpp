#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,num,ans=0;
    cin >> n;
    while(n--){
        cin >> num;
        if(num > 0) ans += num;
    }
    cout << ans;
    return 0;
}