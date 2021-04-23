/*
    TASK: Down Right Score
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[300][300],n,m,ma=-1;
void play(int i,int j,int now){
    now += a[i][j];
    if(i==n-1 && j==m-1){
        ma = max(now,ma);
        return ;
    }
    if(i+1<n) play(i+1,j,now);
    if(j+1<m) play(i,j+1,now);
    return ;
}
int main()
{
    int i,j;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    play(0,0,0);
    printf("%d",ma);
    return 0;
}
/*
3 3
5 19 47
75 3 1
4 5 24
4 4
1 4 5 6
3 4 1 3
3 4 5 6
8 1 2 3
*/
