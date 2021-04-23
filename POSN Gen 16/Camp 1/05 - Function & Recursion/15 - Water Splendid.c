/*
    TASK: Water Splendid
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
int a[10],ans[110],b,c,cnt=0,st[100100],ansjring[100100][110];
void play(int x,int state){
    int i;
    if(x>b || state>c) return ;
    if(x==b && state<=c){
        st[cnt] = state;
        for(i=0;i<state;i++){
            ansjring[cnt][i] = ans[i];
        }
        cnt++;
        return ;
    }
    ans[state]=a[1]; play(a[1]+x,state+1);
    ans[state]=a[2]; play(a[2]+x,state+1);
    ans[state]=a[3]; play(a[3]+x,state+1);
    ans[state]=a[4]; play(a[4]+x,state+1);
    ans[state]=a[5]; play(a[5]+x,state+1);
    ans[state]=a[6]; play(a[6]+x,state+1);
}
int main()
{
    int i,j;
    scanf("%d %d",&b,&c);
    for(i=1;i<=6;i++){
        scanf("%d",&a[i]);
    }
    play(0,0);
    printf("%d\nE\n",cnt);
    for(i=0;i<cnt;i++){
        printf("%d ",st[i]);
        for(j=0;j<st[i];j++){
            printf("%d ",ansjring[i][j]);
        }
        printf("\nE\n");
    }
    return 0;
}
/*
6 2
6 5 4 3 2 1
*/
