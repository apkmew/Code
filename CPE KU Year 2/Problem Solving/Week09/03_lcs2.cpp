/*
    Task	: 03_lcs2
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 13 March 2023 [13:16]
    Algo	: lcs
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
char s[210],t[210];
int dp[210][210];
stack<char> st;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,j,len1,len2;
    cin >> s;
    cin >> t;
    len1 = strlen(s);
    len2 = strlen(t);
    for(i=0;i<len1;i++){
        for(j=0;j<len2;j++){
            if(s[i]==t[j]) dp[i+1][j+1] = dp[i][j]+1;
            else dp[i+1][j+1] = max(dp[i][j+1],dp[i+1][j]);
        }
    }
    cout << dp[len1][len2] << "\n";
    i = len1;
    j = len2;
    while(i>0 && j>0){
        if(s[i-1]==t[j-1]){
            st.push(s[i-1]);
            i--;
            j--;
        }
        else if(dp[i-1][j]>dp[i][j-1]) i--;
        else j--;
    }
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
    return 0;
}