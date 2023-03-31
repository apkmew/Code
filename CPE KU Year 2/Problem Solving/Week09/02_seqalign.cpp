/*
    Task	: 02_seqalign
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 14 March 2023 [20:39]
    Algo	: LCS
    Status	: Incomplete
*/
#include<bits/stdc++.h>
using namespace std;
//char x[310],y[310];
//int dp[310][310];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,j,len1,len2;
    string x,y;
    cin >> x;
    cin >> y;
    len1 = x.length();
    len2 = y.length();
    vector<vector<int>> dp(len1+1,vector<int>(len2+1,0));
    for(i=0;i<=len1;i++) dp[i][0] = i;
    for(i=0;i<=len2;i++) dp[0][i] = i;
    for(i=1;i<=len1;i++){
        for(j=1;j<=len2;j++){
            int match, del, ins;
            match = dp[i-1][j-1] + (x[i-1]==y[j-1]?0:1);
            del = dp[i-1][j] + 1;
            ins = dp[i][j-1] + 1;
            dp[i][j] = min(match,min(del,ins));
        }
    }
    /*for(i=0;i<=len1;i++){
        for(j=0;j<=len2;j++){
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }*/
    cout << dp[len1][len2] << "\n";
    return 0;
}