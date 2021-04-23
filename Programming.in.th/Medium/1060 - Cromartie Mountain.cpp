#include <bits/stdc++.h>
using namespace std;
char a[20][200];
int main(){
    int i,j,k,n,s,h,mas=-1,mah=-1,ma;
    scanf("%d",&n);
    memset(a,'.',sizeof a);
    while(n--){
        scanf("%d %d",&s,&h);
        if(s > mas){
            mas = s;
            ma = s + 2*h;
        }
        mah = max(h,mah);
        j = s;
        for(i=1;i<=h;i++){
            if(a[i][j]=='\\') a[i][j] = 'v';
            else a[i][j] = '/';
            j++;
        }
        i--;
        for(;i>0;i--){
            if(a[i][j]=='/') a[i][j] = 'v';
            else a[i][j] = '\\';
            j++;
        }
    }
    for(j=1;j<=ma;j++){
        for(i=mah;i>=0;i--){
            if(a[i][j]=='/' || a[i][j]=='\\' || a[i][j]=='v'){
                for(k=i-1;k>0;k--){
                    a[k][j] = 'X';
                }
                break;
            }
        }
    }
    for(i=mah;i>0;i--){
        for(j=1;j<ma;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
