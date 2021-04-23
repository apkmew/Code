#include <bits/stdc++.h>
using namespace std;
int a[110];
int main(){
    int i,q,n,ans=1;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        ans = 1;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        for(i=1;i<n;i++){
            if(a[i]==a[i-1]+1){
                ans = 2;
                break;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
