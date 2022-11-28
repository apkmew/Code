#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int ans=0,n,x,y,dis;
    cin >> n;
    while(n--){
        cin >> x >> y;
        dis = x*x+y*y;
        if(dis <= 4) ans += 5;
        else if(dis <= 16) ans += 4;
        else if(dis <= 36) ans += 3;
        else if(dis <= 64) ans += 2;
        else if(dis <= 100) ans += 1;
    }
    cout << ans;
    return 0;
}