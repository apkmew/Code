#include <stdio.h>
int n,ans[20];
void play(int st){
    int i;
    if(st == n){
        for(i=0;i<n;i++){
            if(i == 0) printf("%d",ans[i]);
            else printf("%d",ans[i] ^ ans[i-1]);
        }
        printf("\n");
        return ;
    }
    ans[st] = 0; play(st+1);
    ans[st] = 1; play(st+1);
}
int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        play(0);
    }
    return 0;
}