/*
    TASK: Peatt Board
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int a[1010][1010];
int main()
{
    int w,h,n,i,j,x1,y1,x2,y2;
    scanf("%d %d %d",&w,&h,&n);
    while(n--){
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        x2++,y2++;
        a[y1][x1]+=1;
        a[y1][x2]+=1;
        a[y2][x1]+=1;
        a[y2][x2]+=1;
    }
    for(i=1;i<=h;i++){
        for(j=1;j<=w;j++)
            a[i][j] += a[i-1][j] + a[i][j-1] - a[i-1][j-1];
    }
    for(i=1;i<=h;i++){
        for(j=1;j<=w;j++){
            printf("%d",a[i][j]%2);
        }
        printf("\n");
    }
    return 0;
}
/*
13 8 3
4 2 11 5
3 3 7 8
7 5 12 6
*/
