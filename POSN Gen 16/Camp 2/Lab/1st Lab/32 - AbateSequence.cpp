/*
    TASK: Abate Sequence
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> v[100100];
int ans[100100];
int a[100100];
int main()
{
    int n,i,mx=-2e6,cnt=0,x,cou;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        mx = max(mx,a[i]);
    }
    for(i=0;i<n;i++){
        x = mx - a[i];
        int ii = lower_bound(ans,ans+cnt,x)-ans;
        v[ii].push_back(x);
        if(ii==cnt) cnt++;
        ans[ii] = x;
    }
    printf("%d\n",cnt);
    cnt--;
    cou = cnt+1;
    ans[cnt] = v[cnt][0];
    cnt--;
    while(cnt>=0){
        for(i=0;i<v[cnt].size();i++){
            if(v[cnt][i]<ans[cnt+1]){
                ans[cnt]=v[cnt][i];
                break;
            }
        }
        cnt--;
    }
    for(i=0;i<cou;i++){
        printf("%d ",mx-ans[i]);
    }
    return 0;
}
/*
9
7 1 4 3 7 2 8 1 1
*/
