#include <bits/stdc++.h>
using namespace std;
char a[1000100],b[1000100];
int ans[1000100];
int main(){
    int i,lena,lenb;
    scanf(" %s",a);
    scanf(" %s",b);
    lena = strlen(a);
    lenb = strlen(b);
    for(i=0;i<lena;i++){
        a[i] = toupper(a[i]);
    }
    for(i=0;i<lena;i++){
        b[i] = toupper(b[i]);
    }
    if(lena != lenb){
        printf("R.I.P.");
        return 0;
    }
    for(i=0;i<lena;i++){
        ans[i] = a[i] - b[i];
        if(ans[i]<0) ans[i] = (a[i]+26) - b[i];
        if(ans[i]>9){
            printf("R.I.P.");
            return 0;
        }
    }
    for(i=0;i<lena;i++){
        printf("%d",ans[i]);
    }
    return 0;
}
