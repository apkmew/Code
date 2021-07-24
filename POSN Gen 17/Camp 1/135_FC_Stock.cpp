/*
    TASK: FC_Stock
    LANG: CPP
    AUTHOR: Apkmew
    SCHOOL: Kasetsart University
*/
#include<bits/stdc++.h>
using namespace std;
int a[1000100],dp[1000100];
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,q,i,x,y;
    cin >> n;
    for(i=1;i<=n;i++) cin >> a[i];
    dp[1] = a[1];
    for(i=2;i<=n;i++){
        dp[i] = dp[i-1];
        if(a[i] > a[i-1]){
            dp[i] += a[i] - a[i-1];
        }
    }
    cin >> q;
    while (q--)
    {
        cin >> x >> y;
        cout << dp[y]-dp[x] << "\n";
    }
    return 0;
}
/*
6
10 20 15 12 21 30
3
1 6
2 4
3 5
*/
/*
28
0
9
*/
