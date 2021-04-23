#include <bits/stdc++.h>
using namespace std;
char a[1010][1010];
int main(){
    int n,m,i,j,ans=0;
    scanf("%d %d",&n,&m);
    for(i=2;i<n+2;i++){
        for(j=2;j<m+2;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    for(i=2;i<n+2;i++){
        for(j=2;j<m+2;j++){
            if(a[i][j]=='+'){
                a[i][j] = '.';
                if(a[i+1][j]=='A') a[i+1][j] = '.';
                if(a[i-1][j]=='A') a[i-1][j] = '.';
                if(a[i][j+1]=='A') a[i][j+1] = '.';
                if(a[i][j-1]=='A') a[i][j-1] = '.';
            }
            else if(a[i][j]=='x'){
                a[i][j] = '.';
                if(a[i-1][j-1]=='A') a[i-1][j-1] = '.';
                if(a[i-2][j-2]=='A') a[i-2][j-2] = '.';
                if(a[i+1][j+1]=='A') a[i+1][j+1] = '.';
                if(a[i+2][j+2]=='A') a[i+2][j+2] = '.';
                if(a[i-1][j+1]=='A') a[i-1][j+1] = '.';
                if(a[i-2][j+2]=='A') a[i-2][j+2] = '.';
                if(a[i+1][j-1]=='A') a[i+1][j-1] = '.';
                if(a[i+2][j-2]=='A') a[i+2][j-2] = '.';
            }
        }
    }
    for(i=2;i<n+2;i++){
        for(j=2;j<m+2;j++){
            if(a[i][j]=='A') ans++;
        }
    }
    printf("%d\n",ans);
    for(i=2;i<n+2;i++){
        for(j=2;j<m+2;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
