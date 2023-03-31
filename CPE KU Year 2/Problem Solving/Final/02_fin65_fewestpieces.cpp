/*
    Task	: 02_fin65_fewestpieces
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 30 March 2023 [14:31]
    Algo	: Dynamic Programming
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int dp[5][50][50], a[50][50];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,j,n,m;
    cin >> n >> m;
    for(i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            dp[1][i][j] = a[i][j] + dp[1][i][j-1];
            dp[2][i][m-j+1] = a[i][m-j+1] + dp[2][i][m-j+2];
            dp[3][i][j] = a[i][j] + dp[3][i-1][j];
            dp[4][n-i+1][j] = a[n-i+1][j] + dp[4][n-i+2][j];
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cout << min(min(dp[1][i][j],dp[2][i][j]),min(dp[3][i][j],dp[4][i][j])) << " ";
        }
        cout << "\n";
    }
    return 0;
}
/*
4 5
1 15 8 9 12
20 3 2 1 2
4 5 1 2 6
10 4 15 2 3
*/