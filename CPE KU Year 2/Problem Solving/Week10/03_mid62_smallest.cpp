/*
    Task	: 03_mid62_smallest
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 31 March 2023 [16:35]
    Algo	: Dynamic Programming
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int dp[200100],arr[200100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,q,i,num,t;
    cin >> n >> q;
    cin >> dp[0];
    arr[n-1] = dp[0];
    for(i=1;i<n;i++){
        cin >> num;
        dp[i] = min(dp[i-1],num);
        arr[n-i-1] = dp[i];
    }
    while(q--){
        cin >> t >> num;
        if(t == 1){
            cout << dp[num-1] << "\n";
        }
        if(t == 2){
            cout << n - (lower_bound(arr,arr+n,num)-arr) << "\n";
        }
    }
    //for(i=0;i<n;i++) cout << dp[i] << " ";
    //cout << "\n";
    //for(i=0;i<n;i++) cout << arr[i] << " ";
    return 0;
}
