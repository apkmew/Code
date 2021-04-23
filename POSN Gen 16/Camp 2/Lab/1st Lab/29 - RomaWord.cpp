/*
    TASK: Roma Word
    AUTHOR: Mew
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int dp[2010][2010];
char a[2010],b[2010],ans[2010];
int main()
{
    int i,j,lena,lenb,n,m,z;
    scanf(" %s %s",a,b);
    n = strlen(a);
    m = strlen(b);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(a[i-1] == b[j-1])
                dp[i][j] = dp[i-1][j-1]+1;
            else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }
    printf("%d\n",dp[n][m]);
    i = n, j = m;
    z = dp[n][m];
    ans[z] = '\0';
    z--;
    while(i>0 && j>0){
        if(a[i-1] == b[j-1]){
            ans[z--] = a[i-1];
            i--,j--;
        }
        else if(dp[i-1][j]>dp[i][j-1]) i--;
        else if(dp[i][j-1]>dp[i-1][j]) j--;
        else i--;
    }
    if(dp[n][m] != 0)
        printf("%s\n",ans);
    else printf("No Roma word\n");
    return 0;
}
/*
abcbdab
bdcaba
*/
/*
abcdefabc
bacdefabcde
*/
