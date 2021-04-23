#include <bits/stdc++.h>
using namespace std;
int a[7100][7100],b[7100];
char c[7100];
int main(){
    int i,j,k,n,m;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf(" %s",c);
        for(j=0;j<m;j++){
            a[i][j] = c[j] - '0';
        }
    }
    for(i=1;i<n;i++){
        for(j=1;j<m;j++){
            if(a[i-1][j-1]==0 || a[i-1][j]==0 || a[i][j-1]==0 || a[i][j]==0) continue;
            a[i][j] = min(a[i-1][j-1],min(a[i][j-1],a[i-1][j])) + 1;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            b[a[i][j]]++;
        }
    }
    for(i=min(n,m)-1;i>0;i--){
        b[i] += b[i+1];
    }
    for(i=1;i<=min(n,m);i++){
        printf("%d\n",b[i]);
    }
    return 0;
}
