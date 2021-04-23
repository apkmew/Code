/*
    TASK: AP_Group
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int dp[100100];
pair<int,int> a[100100];
int main()
{
    int q,n,i,att,now;
    scanf("%d",&q);
    while(q--){
        now = 0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d %d",&a[i].first,&a[i].second);
            a[i].second*=-1;
        }
        sort(a,a+n);
        for(i=0;i<n;i++){
            att = upper_bound(dp,dp+now,a[i].second)-dp;
            if(att==now) now++;
            dp[att] = a[i].second;
        }
        printf("%d\n",now);
    }
    return 0;
}
