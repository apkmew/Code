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
    a[b][d]='0';
    if(b+1<r && a[b+1][d]=='.')  play(b+1,d,state+1);
    if(b-1>=0 && a[b-1][d]=='.')  play(b-1,d,state+1);
    if(d+1<c && a[b][d+1]=='.')  play(b,d+1,state+1);
    if(d-1>=0 && a[b][d-1]=='.')  play(b,d-1,state+1);
    if(b==r-1 && d==c-1){
        ans++;
        if(state<mi)    mi=state;
        if(state>ma)    ma=state;
        //return ;
    }
    a[b][d]='.';
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
    play(0,0,0);
    printf("%d %d %d",ans,ma+1,mi+1);

	return 0;
}
/*
3 4
....
..#.
....
*/
