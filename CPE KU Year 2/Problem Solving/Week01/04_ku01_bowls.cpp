#include <bits/stdc++.h>
using namespace std;
int a[310];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,num,mx=-1;
    cin >> n;
    while(n--){
        cin >> num;
        a[num]++;
        mx = max(mx,a[num]);
    }
    cout << mx;
    return 0;
}