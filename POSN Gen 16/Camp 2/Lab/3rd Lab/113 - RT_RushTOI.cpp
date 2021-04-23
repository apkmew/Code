/*
    TASK: RT_RushTOI
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int d[310][310];
int main()
{
    int n,m,i,j,k;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            d[i][j] = 1e9;
        }
    }
    while(m--){
        scanf("%d %d %d",&i,&j,&k);
        d[i][j] = min(d[i][j],k);
    }
    for(k=1;k<=n;k++){
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                d[i][j] = min(d[i][j],d[i][k]+d[k][j]);
            }
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf((d[i][j]!=1e9)?"%d ":"0 ",d[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*
4 5
1 2 10
2 3 10
1 3 15
4 4 10
4 1 10
*/
