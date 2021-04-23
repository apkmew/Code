#include <bits/stdc++.h>
using namespace std;
int a[1100][1100];
int main(){
    int i,j,n,m,k,cnt,o,l;
    scanf("%d %d %d",&n,&m,&k);
    memset(a,1,sizeof a);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=n-1;i>=0;i--){
        cnt = 0;
        for(j=0;j<m;j++){
            if(a[i][j]==1 && a[i+1][j]==0) swap(a[i][j],a[i+1][j]);
            if(a[i][j]==0) cnt++;
            if(a[i][j]==1) cnt=0;
            if(cnt==k){ printf("%d\n",i+1); //return 0;
                for(o=0;o<n;o++){
                    for(l=0;l<m;l++){
                        printf("%d ",a[o][l]);
                    }
                    printf("\n");
                }
                return 0;
            }
        }
    }
    return 0;
}
