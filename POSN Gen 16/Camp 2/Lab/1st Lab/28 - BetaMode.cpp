/*
    TASK: Beta mode
    AUTHOR: Mew
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int dp[2][10010];
char a[10010],b[10010],ans[10010];
int main()
{
    int i,j,lena,lenb,n,m,z,x,y;
    scanf(" %s %s",a,b);
    n = strlen(a);
    m = strlen(b);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(a[i-1] == b[j-1])
                dp[i%2][j] = dp[(i+1)%2][j-1]+1;
            else
                dp[i%2][j] = 0;
            if(dp[i%2][j]>y){
                y = dp[i%2][j];
                x = i - 1;
            }
        }
    }
    ans[y] = '\0';
    while(y--){
        ans[y]=a[x--];
    }
    printf("%s\n",ans);
    return 0;
}
