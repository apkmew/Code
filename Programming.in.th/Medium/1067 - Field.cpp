#include <bits/stdc++.h>
using namespace std;
int a[110][110],mark[110][110];
int main(){
    int n,m,k,i,j;
    scanf("%d %d %d",&n,&m,&k);
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    while(k--){
        memset(mark,0,sizeof mark);
        scanf("%d %d",&j,&i);
        while(i>=1 && i<=m && j>=1 && j<=n){
            if(mark[i][j]) break;
            mark[i][j] = 1;
            if(a[i][j]==1) i--;
            else if(a[i][j]==2) j++;
            else if(a[i][j]==3) i++;
            else if(a[i][j]==4) j--;
        }
        if(i<1) printf("N\n");
        else if(i>m) printf("S\n");
        else if(j<1) printf("W\n");
        else if(j>n) printf("E\n");
        else printf("NO\n");
    }
    return 0;
}
