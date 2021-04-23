#include <bits/stdc++.h>
using namespace std;
int a[110][110],mark[110];
int main(){
    int t,n,k,r,c,i,j,ch,cnt=0;
    scanf("%d",&t);
    while(t--){
        cnt++;
        k = r = c = 0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                scanf("%d",&a[i][j]);
                if(i==j) k += a[i][j];
            }
        }
        for(i=0;i<n;i++){
            ch = 0;
            memset(mark,0,sizeof mark);
            for(j=0;j<n;j++){
                if(mark[a[i][j]]){
                    ch = 1;
                    break;
                }
                mark[a[i][j]] = 1;
            }
            if(ch) r++;
        }
        for(j=0;j<n;j++){
            ch = 0;
            memset(mark,0,sizeof mark);
            for(i=0;i<n;i++){
                if(mark[a[i][j]]){
                    ch = 1;
                    break;
                }
                mark[a[i][j]] = 1;
            }
            if(ch) c++;
        }
        printf("Case #%d: %d %d %d\n",cnt,k,r,c);
    }
    return 0;
}
