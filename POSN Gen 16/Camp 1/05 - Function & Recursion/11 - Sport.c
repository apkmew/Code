/*
    TASK: Sport
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
int k,ch[100];
void play(int w,int l,int state){
    if(w==k || l==k){
        for(int i=0;i<2*k-1;i++){
            if(ch[i]==1) printf("W ");
            else if(ch[i]==2) printf("L ");
        }
        printf("\n");
        return ;
    }
    ch[state] = 1;
    play(w+1,l,state+1);
    ch[state] = 2;
    play(w,l+1,state+1);
    ch[state] = 0;
}
int main()
{
    int w,l;
    scanf("%d",&k);
    scanf("%d",&w);
    scanf("%d",&l);
    play(w,l,0);
    return 0;
}
