/*
    TASK: Temperature is Rising
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
int a[30][30],mark[30][30],m,max=-10;
void play(int i,int j){
    if(a[i][j]>max) max=a[i][j];
    if(i+1<=m && a[i+1][j]!=100 && a[i+1][j]>a[i][j]) play(i+1,j);
    if(i-1>=1 && a[i-1][j]!=100 && a[i-1][j]>a[i][j]) play(i-1,j);
    if(j+1<=m && a[i][j+1]!=100 && a[i][j+1]>a[i][j]) play(i,j+1);
    if(j-1>=1 && a[i][j-1]!=100 && a[i][j-1]>a[i][j]) play(i,j-1);
}
int main()
{
    int i,j,x,y;
    scanf("%d",&m);
    scanf("%d %d",&x,&y);
    for(i=1;i<=m;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    play(y,x);
    printf("%d",max);
    return 0;
}
/*
4
2 1
100 1 3 8
0 2 1 4
2 3 5 100
0 8 8 100
*/
/*
5
4 2
0 1 100 100 0
100 2 3 1 1
100 100 4 5 100
8 7 100 6 100
7 100 100 100 9
*/
