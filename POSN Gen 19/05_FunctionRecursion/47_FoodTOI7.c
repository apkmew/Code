#include <stdio.h>
int ans[10],ch[10],dont[10],n,m;
void play(int st){
    int i;
    if(st == n){
        for(i=0;i<n;i++){
            printf("%d ",ans[i]);
        }
        printf("\n");
        return;
    }
    for(i=1;i<=n;i++){
        if(st==0 && ch[i]==0 && dont[i]==0){
            ans[st] = i;
            ch[i] = 1;
            play(st+1);
            ch[i] = 0;
        }
        else if(st != 0 && ch[i] == 0){
            ans[st] = i;
            ch[i] = 1;
            play(st+1);
            ch[i] = 0;
        }
    }
}
int main(){
    int i,num;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&num);
        dont[num]=1;
    }
    play(0);
    return 0;
}