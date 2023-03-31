/*
    Task	: 05_inc
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 27 February 2023 [14:31]
    Algo	: Dynamic Programming
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int dp[1010],a[1010];
vector<int> ans;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,i,j,mx=-1;
    cin >> n;
    for(i=0;i<n;i++) cin >> a[i];
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            if(a[i]>a[j]){
                dp[i] = max(dp[i],dp[j]+1);
            }
            mx = max(mx,dp[i]);
        }
    }
    for(i=n-1;i>=0;i--){
        if(dp[i]==mx){
            ans.push_back(a[i]);
            mx--;
        }
    }
    cout << ans.size() << "\n";
    for(i=ans.size()-1;i>=0;i--){
        cout << ans[i] << " ";
    }
    return 0;
}