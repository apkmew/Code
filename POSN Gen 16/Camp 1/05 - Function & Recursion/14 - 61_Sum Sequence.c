/*
    TASK: 61_Sum Sequence
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
int s,n,cnt=0,ch=0;
int a[1100000];
void play(int sum,int state){
    int i;
    if(ch)      return ;
    if(sum > s) return ;
    if(sum == s){
        cnt++;
        if(cnt == n){
            for(i=0;i<state;i++){
                printf("%d",a[i]);
            }
            ch=1;
            printf("\n");
        }
        return ;
    }
    for(i=1;i<=9;i++){
        sum+=i;
        a[state] = i;
        //printf("%d ",sum);
        play(sum,state+1);
        sum-=i;
    }
}
int main()
{
    int q;
    scanf("%d",&q);
    while(q--){
        cnt = 0;
        ch = 0;
        scanf("%d %d",&s,&n);
        play(0,0);
    }
    return 0;
}
