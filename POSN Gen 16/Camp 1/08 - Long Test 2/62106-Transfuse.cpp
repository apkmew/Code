#include <bits/stdc++.h>
using namespace std;
int r,c,mi=1e9,ma=-1e9,cnt=0;
char a[10][10];
void play(int i,int j,int state){
    a[i][j] = '0';
    if(i==r-1 && j==c-1){
        cnt++;
        if(state>ma) ma = state;
        if(state<mi) mi = state;
        a[i][j]='.';
        return ;
    }
    if(i>=0 && a[i-1][j]=='.') play(i-1,j,state+1);
    if(i<r  && a[i+1][j]=='.') play(i+1,j,state+1);
    if(j>=0 && a[i][j-1]=='.') play(i,j-1,state+1);
    if(j<c  && a[i][j+1]=='.') play(i,j+1,state+1);
    a[i][j] = '.';
    return ;
}
int main(){
    int i,j;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    play(0,0,1);
    printf("%d %d %d",cnt,ma,mi);
    return 0;
}
