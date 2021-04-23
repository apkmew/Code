/*
    TASK: Area Rectangular
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int dp[1010][1010];
int main()
{
    int r,c,i,j,a,q,x1,y1,x2,y2,ans;
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            scanf("%d",&a);
            dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + a;
        }
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        ans = dp[x2+1][y2+1] + dp[x1][y1] - dp[x1][y2+1] - dp[x2+1][y1];
        printf("%d\n",ans);
    }
    return 0;
}
/*
3 4
3 7 -2 12
0 -4 9 -3
6 3 8 -1
2
0 1 1 3
0 0 2 2
*/
