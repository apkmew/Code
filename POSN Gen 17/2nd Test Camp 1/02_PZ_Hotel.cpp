/*
    TASK : PZ_Hotel
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
int a[]={0,500,800,1300,1500,1500,2000,2300,2800,3000,3000,3000,3000,3000,3000,3000};
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int q,n,ans;
    cin >> q;
    while(q--){
        cin >> n;
        ans = n/15*3000;
        ans += a[n%15];
        cout << ans << "\n";
    }
    return 0;
}
/*
2
21
24
*/