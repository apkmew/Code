#include <stdio.h>
char ans[300],k;
void play(int st,int w,int l){
    int i;
    if(w == k || l == k){
        for(i=0;i<st;i++){
            printf("%c ",ans[i]);
        }
        printf("\n");
        return ;
    }
    ans[st] = 'W'; play(st+1,w+1,l);
    ans[st] = 'L'; play(st+1,w,l+1);
}
int main(){
    int a,b;
    scanf("%d",&k);
    scanf("%d",&a);
    scanf("%d",&b);
    play(0,a,b);
    return 0;
}