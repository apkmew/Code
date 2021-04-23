/*
    TASK: Parenthesis
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int n,cnt=0;
char ans[100100][50],a[2000];
void play(int open,int close,int state){
    if(open > n && close > n) return ;
    if(close > open) return ;
    if(state > 2*n) return;
    if(open==n && close==n){
        a[2*n]='\0';
        strcpy(ans[cnt++],a);
        return ;
    }
    a[state]='(';
    play(open+1,close,state+1);
    a[state]=')';
    play(open,close+1,state+1);
}
int main()
{
    int i;
    scanf("%d",&n);
    play(0,0,0);
    printf("%d\n",cnt);
    for(i=0;i<cnt;i++){
        printf("%s\n",ans[i]);
    }
    return 0;
}
