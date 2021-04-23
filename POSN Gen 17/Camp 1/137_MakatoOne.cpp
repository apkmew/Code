/*
    TASK : Makato One
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
int dp[100100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,j,n,q;
    cin >> n >> q;
    for(i=1;i<=n;i++){
        cin >> dp[i];
        dp[i] ^= dp[i-1];
    }
    while(q--){
        cin >> i >> j;
        n = dp[j]^dp[i-1];
        cout << n << "\n";
    }
    return 0;
}
/*
5 5
2 6 2 9 1
5 5
1 5
2 3
4 5
2 4
10 5
25 80 36 69 1 81 56 44 2 21
5 9
3 7
3 5
6 6
2 8
*/