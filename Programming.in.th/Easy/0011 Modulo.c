#include<stdio.h>
int a[15],b[50];
int main(){
    int i,ans = 0,m;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        m = a[i]%42;
        b[m] = 1;
    }
    for(i=0;i<42;i++){
        if(b[i] == 1)
            ans++;
    }
    printf("%d",ans);
    return 0;
}
