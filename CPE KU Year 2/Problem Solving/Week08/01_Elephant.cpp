/*
    Task	: 01_Elephant
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 27 February 2023 [13:31]
    Algo	: Dynamic Programming
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int dp[100100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,i;
    cin >> n;
    cin >> i >> i;
    for(i=3;i<=n;i++){
        cin >> dp[i];
        dp[i] = max(dp[i-1],dp[i-3]+dp[i]);
    }
    cout << dp[n];
    return 0;
}
/*
12
1
2
5
4
3
0
6
1
2
7
2
1
*/