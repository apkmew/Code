/*
    TASK: Oh! God Word
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[1010];
int dp[1010][1010];
int main()
{
    int i,len,j,k,ma=1,st=0;
    scanf(" %s",a);
    len = strlen(a);
    for(i=0;i<=len;i++) dp[i][i]=1;
    for(i=len-2;i>=0;i--){
        if(a[i]==a[i+1]){
            dp[i][i+1]=1; ma = 2; st = i;
        }
    }
    for(k=3;k<=len;k++){
        for(i=0;i<=len-k;i++){
            j = i+k-1;
            if(dp[i+1][j-1]==1 && a[i]==a[j]){
                dp[i][j] = 1;
                if(k>ma) ma = k, st = i;
            }
        }
    }
    for(i=st;i<st+ma;i++){
        printf("%c",a[i]);
    }
    return 0;
}
