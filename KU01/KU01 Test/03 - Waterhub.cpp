#include <bits/stdc++.h>
using namespace std;
int a[110][5];
int main(){
    int n,i,j,k,sum=0,ans=1<<30,x,y;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a[i][0],&a[i][1]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i!=j){
                for(k=0;k<n;k++){
                    x = abs(a[i][0]-a[k][0]) + abs(a[i][1]-a[k][1]);
                    y = abs(a[j][0]-a[k][0]) + abs(a[j][1]-a[k][1]);
                    sum += min(x,y);
                }
                ans = min(ans,sum);
                sum = 0;
            }
        }
    }
    printf("%d",ans);
    return 0;
}
