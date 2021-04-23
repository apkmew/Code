#include <bits/stdc++.h>
using namespace std;
char a[110][110];
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    for(j=1;j<=n;j++){
        for(i=1;i<=n;i++){
            if(a[i][j]=='#' && a[i][j-1]=='.'){
                while(a[i][j-1]=='.'){
                    swap(a[i][j],a[i][j-1]);
                    j--;
                }
            }
        }
    }
    for(i=n;i>0;i--){
        for(j=1;j<=n;j++){
            if(a[i][j]=='#' && a[i+1][j]=='.'){
                while(a[i+1][j]=='.'){
                    swap(a[i][j],a[i+1][j]);
                    i++;
                }
            }
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
