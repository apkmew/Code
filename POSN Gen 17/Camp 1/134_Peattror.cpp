/*
    TASK : Peattror
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
long long dp[10];
string a;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    long long len,i;
    cin >> a;
    len = a.size();
    dp[0] = 1;
    for(i=0;i<len;i++){
        switch(a[i]){
            case 'p': dp[1]+=dp[0]; dp[1]%=2555; break;
            case 'e': dp[2]+=dp[1]; dp[2]%=2555; break;
            case 'a': dp[3]+=dp[2]; dp[3]%=2555; break;
            case 't': dp[4]+=dp[3]; dp[4]%=2555; break;
            case 'r': dp[5]+=dp[4]; dp[5]%=2555;  dp[7]+=dp[6]; dp[7]%=2555; break;
            case 'o': dp[6]+=dp[5]; dp[6]%=2555; break;
        }
    }
    cout << dp[7];
    return 0;
}
/*
4
ABC
AABC
ABAABBCC
AB
*/