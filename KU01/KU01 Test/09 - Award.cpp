#include <bits/stdc++.h>
using namespace std;
int a[5][310],mark[620];
int main(){
    int i,j,k,n,now,ans=-1,ch;
    scanf("%d",&n);
    for(i=0;i<2*n;i++){
        if(i<n){
            scanf("%d",&a[0][i]);
            mark[a[0][i]]=1;
        }
        if(i>=n){
            scanf("%d",&a[1][i-n]);
            mark[a[1][i-n]]=1;
        }
    }
    for(i=0;i<n;i++){
        ch = 0;
        now = 0;
        for(j=0;j<=i;j++){
            now+=a[0][j];
            if(a[0][j]==0) ch++;
        }
        for(j=i;j<n;j++){
            now+=a[1][j];
            if(a[1][j]==0) ch++;
        }
        //printf("%d ",ch);
        for(j=2*n;ch>0;j--){
            if(mark[j]==0){
                //printf("%d ",j);
                now+=j;
                ch--;
            }
        }
        // printf("%d\n",now);
        ans = max(ans,now);
    }
    printf("%d",ans);
    return 0;
}
