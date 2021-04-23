/*
    TASK: Ultimate
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int a[1010][1010];
int main()
{
    int r,c,i,j,ma=-1;
    char b;
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            scanf(" %c",&b);
            if(b=='#') a[i][j]=0;
            else a[i][j]=min(a[i][j-1],min(a[i-1][j],a[i-1][j-1]))+1;
            ma = max(ma,a[i][j]);
        }
    }
    printf("%d",ma);
    return 0;
}
/*
7 8
.....#..
.#..#...
.....#..
#.......
........
.....#..
..#.....
*/
