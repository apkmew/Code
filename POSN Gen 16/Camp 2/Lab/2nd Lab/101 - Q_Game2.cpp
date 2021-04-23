/*
    TASK: Q_Game2
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[210][210],dp1[210][210],dp2[210][210];
int main()
{
    int h,w,i,j;
    scanf("%d %d",&h,&w);
    for(i=0;i<=h+1;i++){
        for(j=0;j<=w+1;j++){
            dp2[i][j] = 2e9;
        }
    }
    for(i=h;i>0;i--){
        for(j=1;j<=w;j++){
            scanf("%d",&a[i][j]);
            dp1[i][j] = a[i][j];
            dp2[i][j] = a[i][j];
        }
    }
    for(i=1;i<=h;i++){
        for(j=1;j<=w;j++){
            dp1[i][j] = max(dp1[i-1][j],dp1[i][j-1])+dp1[i][j];
            if(i==1 && j==1) continue;
            else dp2[i][j] = min(dp2[i-1][j],dp2[i][j-1])+dp2[i][j];
        }
    }
    printf("%d",dp1[h][w]-dp2[h][w]);
    return 0;
}
/*
4 4
3 3 3 3
2 2 1 3
0 1 1 3
0 0 0 0
*/
