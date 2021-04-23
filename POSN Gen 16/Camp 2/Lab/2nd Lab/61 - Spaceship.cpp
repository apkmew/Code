/*
    TASK: Spaceship
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int x[15],y[15],z[15],s[15][5],mark[15],n,a,ans=1e9;
void play(int i,int m,int k,int c,int sum){
    int j;
    if(m>=n && k>=n && c>=n){
        ans = min(ans,sum);
        return ;
    }
    for(j=1;j<=a;j++){
        if(!mark[j]){
            mark[j] = 1;
            play(j,m+s[j][0],k+s[j][1],c+s[j][2],sum + (x[j]-x[i])*(x[j]-x[i]) + (y[j]-y[i])*(y[j]-y[i]) + (z[j]-z[i])*(z[j]-z[i]));
            mark[j] = 0;
        }
    }
    //return ;
}
int main()
{
    int i;
    scanf("%d",&n);
    scanf("%d %d %d",&x[0],&y[0],&z[0]);
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        scanf("%d %d %d",&x[i],&y[i],&z[i]);
        scanf("%d %d %d",&s[i][0],&s[i][1],&s[i][2]);
    }
    play(0,0,0,0,0);
    printf("%d",ans);
    return 0;
}
/*
5
0 0 0
5
60 34 56
0 5 7
90 41 92
1 7 8
24 61 81
6 8 8
41 86 70
5 6 7
46 97 85
9 2 4
*/
