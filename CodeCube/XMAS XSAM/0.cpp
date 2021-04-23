#include <bits/stdc++.h>
using namespace std;
int mark[1010];
char a[1010],b[1010];
int main(){
    int i,lena,lenb,now,j,ans=0;
    scanf(" %s",a);
    scanf(" %s",b);
    lena = strlen(a);
    lenb = strlen(b);
//    sort(a,a+lena);
//    sort(b,b+lenb);
    for(i=0;i<lena;i++){
        for(j=0;j<lenb;j++){
            if(a[i]==b[j] && mark[j]==0){
                mark[j]=1;
                ans++;
            }
        }
    }
    printf("%d",ans);
    return 0;
}
