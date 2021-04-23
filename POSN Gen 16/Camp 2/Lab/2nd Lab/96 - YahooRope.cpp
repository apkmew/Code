/*
    TASK: Yahoo Rope
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int l[1010],r[1010],dp[1010];
int main()
{
    int i,q,n,k,mx=-1,x,ma;
    scanf("%d",&q);
    while(q--){
        mx = -1;
        scanf("%d",&n);
        l[0] = r[n-1] = 1;
        for(i=0;i<n;i++){
            scanf("%d",&dp[i]);
        }
        for(i=1;i<n;i++){
            k = i-1;
            ma = -1;
            while(k>=0){
                if(l[k]>ma && dp[k]<dp[i]){
                    ma = l[k];
                }
                k--;
            }
            l[i] = ma+1;
        }
        for(i=n-2;i>=0;i--){
            k = i+1;
            ma = -1;
            while(k<n){
                if(r[k]>ma && dp[k]<dp[i]){
                    ma = r[k];
                }
                k++;
            }
            r[i] = ma+1;
        }
        for(i=0;i<n;i++){
            mx = max(mx,l[i]+r[i]);
            //printf("%d %d\n",l[i],r[i]);
        }
        printf("%d",mx-1);
        memset(l,0,sizeof l);
        memset(r,0,sizeof r);
        memset(dp,0,sizeof dp);
    }
    return 0;
}
/*
1
18
0 2 8 4 3 2 4 1 8 5 7 1 3 9 6 4 2 0
*/
