/*
    TASK: Mobile Find
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
#include <stdlib.h>
int a[35][35];
int main()
{
    int t,h,w,i,j,max=0,x,y;
    scanf("%d",&t);
    while(t--){
            max = x = y = -1;
        scanf("%d %d",&h,&w);
        for(i=1;i<=h;i++){
            for(j=1;j<=w;j++){
                scanf("%d",&a[i][j]);
            }
        }
        for(i=1;i<=h;i++){
            for(j=1;j<=w;j++){
                if(abs(a[i][j]-a[i][j+1])<=10 && a[i][j]+a[i][j+1]>max && j+1<=w){
                    max = a[i][j]+a[i][j+1];
                    x=i,y=j;
                }
                if(abs(a[i][j]-a[i+1][j])<=10 && a[i][j]+a[i+1][j]>max && i+1<=h){
                    max = a[i][j]+a[i+1][j];
                    x=i,y=j;
                }
            }
        }
        printf("%d %d\n",x,y);
    }
    return 0;
}
/*
2
4 5
5 1 2 10 4
4 30 3 0 100
3 25 10 4 10
3 20 4 8 5
4 4
0 0 0 0
0 0 0 0
0 1 1 1
1 1 0 0
*/
