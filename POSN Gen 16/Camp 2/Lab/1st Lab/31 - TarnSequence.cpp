/*
    TASK: Tarn Sequence (LIS n(log(n)))
    AUTHOR: Mew
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
vector <int> v[100100];
int ans[100100];
int x[100100];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        int ii = lower_bound(ans,ans+cnt,x[i])-ans;
        v[ii].push_back(x[i]);
        if(ii==cnt) cnt++;
        ans[ii] = x[i];
    }
    printf("%d\n",cnt);
    cnt--;
    int cou = cnt+1;
    ans[cnt] = v[cnt][0];
    cnt--;
    while(cnt>=0){
        for(int i=0;i<v[cnt].size();i++){
            if(v[cnt][i] < ans[cnt+1]){
                ans[cnt] = v[cnt][i];
                break;
            }
        }
        cnt--;
    }
    for(int i=0;i<cou;i++){
        printf("%d ",ans[i]);
    }
    printf("\n");
    return 0;
}
/*
9
10 1 11 2 3 14 4 13 5
*/
