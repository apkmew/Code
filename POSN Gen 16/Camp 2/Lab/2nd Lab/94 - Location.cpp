/*
    TASK: Location
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[1010][1010];
int main()
{
    int n,m,i,j,k,now,mx=-1;
    scanf("%d %d",&n,&m);
    scanf("%d",&k);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&now);
            a[i][j] = now + a[i-1][j] + a[i][j-1] - a[i-1][j-1];
        }
    }
    for(i=k;i<=n;i++){
        for(j=k;j<=m;j++){
            now = a[i][j] - a[i-k][j] - a[i][j-k] + a[i-k][j-k];
            mx = max(mx,now);
        }
    }
    printf("%d",mx);
    return 0;
}
/*
5 10
2
5 9 2 9 1 2 8 9 1 6
9 1 3 9 8 4 2 1 5 7
2 7 9 3 8 5 2 7 6 8
1 6 2 1 7 7 1 9 4 1
8 5 2 3 9 8 5 6 3 3
*/
