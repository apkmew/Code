/*
    Task	: 006_C-Value
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 16 May 2021 [00:07]
    Algo	: Kadane
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int dp[1001000],qs[1001000];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,i,mx=-1,a;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> a;
        if(i%2==1) a*=-1;
        qs[i] = a + qs[i-1];
        dp[i] = max(a+dp[i-1],0);
        mx = max(mx,dp[i]);
    }
    cout << qs[n] - 2*mx;
    return 0;
}