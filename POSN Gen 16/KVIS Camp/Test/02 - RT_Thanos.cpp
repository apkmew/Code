/*
    TASK: RT_Thanos
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[3100][3100],cnt[3100],ch[3100];
int main()
{
    int i,j,r,c,d,x,y,o=1e9;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
        scanf(" %s",a[i]);
    }
    for(j=0;j<c;j++){
        for(i=r-1;i>=0;i--){
            if(a[i][j]=='#' && a[i-1][j]=='.') x = i;
            if(a[i][j]=='#' && ch[j]==0) cnt[j]++;
            if(a[i][j]=='X' && a[i+1][j]=='.'){
                ch[j] = 1;
                y = i;
                d = x - y - 1;
                o = min(o,d);
                break;
            }
        }
    }
    for(j=0;j<c;j++){
        for(i=r-1;i>=0;i--){
            if(a[i][j]=='#') cnt[j]--;
            if(a[i][j]=='.' && a[i+1][j]=='#' && cnt[j]<=0){
                while(i>=0){
                    if(i-o>=0) swap(a[i][j],a[i-o][j]);
                    i--;
                }
                break;
            }
        }
    }
    for(i=0;i<r;i++){
        printf("%s\n",a[i]);
    }
    return 0;
}
/*
5 6
######
.XXXX#
...X.#
.....#
######
---------
5 6
.XXXX.
...X..
......
#..###
######
*/
