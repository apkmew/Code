#include <bits/stdc++.h>
using namespace std;
char a[30][1010],b[1010];
int main(){
    int key,i,j,k,len,len2,mx=-1;
    scanf("%d",&key);
    scanf(" %s",b);
    if(key == 1){
        printf("%s",b);
        return 0;
    }
    len = strlen(b);
    len2 = len;
    i = key, j = 1;
    while(len2>0){
        for(;i>1 && len2>0;i--){
            a[i][j] = '1';
            len2--;
        }
        for(k=1;k<key && len2>0;k++,j++){
            a[i][j] = '1';
            len2--;
        }
        for(;i<key && len2>0;i++){
            a[i][j] = '1';
            len2--;
        }
        for(k=1;k<key && len2>0;k++,j++){
            a[i][j] = '1';
            len2--;
        }
    }
    mx = j, k = 0;
    for(i=1;i<=key;i++){
        for(j=1;j<=mx;j++){
            if(a[i][j]=='1'){
                a[i][j] = b[k];
                k++;
            }
        }
    }
    i = key, j = 1;
    while(len>0){
        for(;i>1 && len>0;i--){
            printf("%c",a[i][j]);
            len--;
        }
        for(k=1;k<key && len>0;k++,j++){
            printf("%c",a[i][j]);
            len--;
        }
        for(;i<key && len>0;i++){
            printf("%c",a[i][j]);
            len--;
        }
        for(k=1;k<key && len>0;k++,j++){
            printf("%c",a[i][j]);
            len--;
        }
    }
    return 0;
}
