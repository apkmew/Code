/*
    Task	: RNA
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Language: C++
    Created	: 15 March 2023 [15:17]
    Algo	: Dynamic Programming
    Status	: Incomplete
*/
#include<bits/stdc++.h>
using namespace std;
char rna[210];
int dp[210][210];
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int len,i,j,k;
    cin >> rna;
    len = strlen(rna);
    for(j=1;j<=len;j++){
        for(i=j;i>0;i--){
            if(j < i-4) continue;
            dp[i][j] = dp[i][j-1];
            for(k=i;k<=j;k++){
                if(k >= j-4) continue;
                if(rna[k-1] == 'A' && rna[j-1] == 'U') dp[i][j] = max(dp[i][j],dp[i][k-1]+dp[k+1][j-1]+1);
                if(rna[k-1] == 'U' && rna[j-1] == 'A') dp[i][j] = max(dp[i][j],dp[i][k-1]+dp[k+1][j-1]+1);
                if(rna[k-1] == 'G' && rna[j-1] == 'C') dp[i][j] = max(dp[i][j],dp[i][k-1]+dp[k+1][j-1]+1);
                if(rna[k-1] == 'C' && rna[j-1] == 'G') dp[i][j] = max(dp[i][j],dp[i][k-1]+dp[k+1][j-1]+1);
            }
        }
    }
    cout << dp[1][len] << "\n";
    return 0;
}