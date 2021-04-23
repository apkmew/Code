/*
    TASK:
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[1000100],dp[1000100];
int main()
{
    int n,i,q,s,e;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    dp[1] = a[1];
    for(i=2;i<=n;i++){
        dp[i] = dp[i-1];
        if(a[i] > a[i-1])
            dp[i] += a[i] - a[i-1];
        //if(dp[i]<0) dp[i] = 0;
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&s,&e);
        printf("%d\n",dp[e]-dp[s]);
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
