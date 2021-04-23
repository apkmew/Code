#include <stdio.h>
int a[1010];
int main(){
    int n,m,now,i;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    i = 0;
    while(m--){
        scanf("%d",&now);
        i+=now;
        //if(a[i]==0) continue;
        if(a[i]!=0) i+=a[i];
        if(i>n){
            i=n;
            goto next;
        }
        if(i<0){
            i = 0;
        }
    }
    next:;
    printf("%d",i);
    return 0;
}
