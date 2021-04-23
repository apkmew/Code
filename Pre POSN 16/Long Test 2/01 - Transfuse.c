/*
 TASK: Transfuse
 LANG: C++
 AUTHOR: Mew
*/

#include <bits/stdc++.h>
using namespace std;
int r,c,mi=100,ma=-1,now,ans=0;
char a[10][10];
void play(int b,int d,int state){
    a[b][c]='0';
    if(a[b+1][d]=='.')  play(b+1,d,state+1);
    if(a[b-1][d]=='.')  play(b-1,d,state+1);
    if(a[b][d+1]=='.')  play(b,d+1,state+1);
    if(a[b][d-1]=='.')  play(b,d-1,state+1);
    if(b==r-1 && d==c-1){
        ans++;
        if(state<mi)    mi=state;
        if(state>ma)    ma=state;
        return ;
    }
}
int main(){
    int i,j;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    printf("%d %d %d",ans,ma,mi);

	return 0;
}
