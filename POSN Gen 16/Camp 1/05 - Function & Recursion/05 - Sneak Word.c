/*
    TASK: Sneak Word
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int n,m,len,ch=0;
char a[30][30],b[110],x[110],y[110],temp[30][30];
void play(int i,int j,int state){
    if(ch)  return ;
    x[state]=i;
    y[state]=j;
    if(state==len-1){
        ch=1;
        for(int k=0;k<len;k++){
            printf("%d %d\n",x[k],y[k]);
        }
        return ;
    }
    char tempp = a[i][j];
    a[i][j]= '.';
    if(i+1<=m && a[i+1][j]==b[state+1])  play(i+1,j,state+1);
    if(i-1>0  && a[i-1][j]==b[state+1])  play(i-1,j,state+1);
    if(j+1<=n && a[i][j+1]==b[state+1])  play(i,j+1,state+1);
    if(j-1>0  && a[i][j-1]==b[state+1])  play(i,j-1,state+1);
    a[i][j] = tempp;
}
int main()
{
    int i,j,q;
    scanf("%d %d",&m,&n);
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            scanf(" %c",&a[i][j]);
            a[i][j] = toupper(a[i][j]);
            temp[i][j] = a[i][j];
        }
    }
    scanf("%d",&q);
    while(q--){
        scanf(" %s",b);
        len = strlen(b);
        for(i=0;i<len;i++)
            b[i] = toupper(b[i]);
        ch=0;
        for(i=1;i<=m;i++){
            for(j=1;j<=n;j++){
                if(a[i][j]==b[0]){
                    play(i,j,0);
                    if(ch) goto next;
                }
            }
        }
        next:;
        if(ch==0) printf("No Matching Word\n");
        for(i=1;i<=m;i++){
            for(j=1;j<=n;j++){
                a[i][j] = temp[i][j];
            }
        }
    }
    return 0;
}
/*
3 5
TAEPE
TULAR
STOPW
2
PEATT
HELLOWORLD
*/
