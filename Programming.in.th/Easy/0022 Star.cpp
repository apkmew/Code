#include <bits/stdc++.h>
using namespace std;
char a[1010][1010];
int main(){
    int i,j,n,r;
    scanf("%d",&n);
    memset(a,'-',sizeof a);
    if(n%2==0){
        i = n/2;
        j = 1;
        for(;i>0;i--,j++) a[i][j] = '*';
        i++,j--;
        for(;i<=n/2;i++,j++) a[i][j] = '*';
        i--;
        r = j-1;
        for(;i<=n;i++,j--) a[i][j] = '*';
        i--,j++;
        for(;i>n/2;i--,j--) a[i][j] = '*';
    }
    if(n%2==1){
        i = n/2+1;
        j = 1;
        for(;i>0;i--,j++) a[i][j] = '*';
        i++,j--;
        for(;i<=n/2+1;i++,j++) a[i][j] = '*';
        i--,j--;
        r = j;
        for(;i<=n;i++,j--) a[i][j] = '*';
        i--,j++;
        for(;i>n/2+1;i--,j--) a[i][j] = '*';
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=r;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
