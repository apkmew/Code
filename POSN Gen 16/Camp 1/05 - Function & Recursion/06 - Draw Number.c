/*
    TASK: 61_Draw Number
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
#include <string.h>
int a[10][10],mark[1000005],ans[10];
int di[4]={-1,1,0,0},dj[4]={0,0,-1,1},sum,cnt;
void play(int i,int j,int state){
    ans[state] = a[i][j];
    if(state==6){
        sum = 0;
        for(int k=1;k<=6;k++){
            sum*=10;
            sum+=ans[k];
        }
        if(!mark[sum]) cnt++;
        mark[sum] = 1;
        return ;
    }
    for(int k=0;k<4;k++){
        int ii = i+di[k], jj = j+dj[k];
        if(ii==0 || ii>5 || jj==0 || jj>5)   continue ;
        play(ii,jj,state+1);
    }
}
int main()
{
    int q,i,j;
    scanf("%d",&q);
    while(q--){
        cnt = 0;
        for(i=1;i<=5;i++){
            for(j=1;j<=5;j++){
                scanf("%d",&a[i][j]);
            }
        }
        for(i=1;i<=5;i++){
            for(j=1;j<=5;j++){
                play(i,j,1);
            }
        }
        printf("%d\n",cnt);
        cnt = 0;
        memset(mark,0,sizeof mark);
    }
    return 0;
}
/*
1
1 1 1 1 1
1 1 1 1 1
1 1 1 1 1
1 1 1 2 1
1 1 1 1 1
*/
