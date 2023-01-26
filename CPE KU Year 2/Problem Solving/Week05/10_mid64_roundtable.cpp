/*
    Task	: 10_mid64_roundtable
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 26 January 2023 [10:46]
    Algo	: Dynamic Programming
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int a[200100],dp[200100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,n,dis,mx=-1;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> a[i];
        dis = (i + n - a[i]) % n;
        dp[dis]++;
        mx = max(mx,dp[dis]);
    }
    cout << mx;
    return 0;
}