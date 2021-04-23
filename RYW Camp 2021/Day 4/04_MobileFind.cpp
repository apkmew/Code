/*
    TASK : Mobile Find
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
    LANG : C++
*/
#include <bits/stdc++.h>
using namespace  std;
int a[50][50];
int main(){
    int q,h,w,i,j,x,y,ma;
    scanf("%d",&q);
    while (q--)
    {
        ma = -2e9;
        scanf("%d %d",&h,&w);
        for(i=0;i<h;i++){
            for(j=0;j<w;j++){
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<h;i++){
            for(j=0;j<w;j++){
                if(j+1<w && a[i][j]+a[i][j+1]>ma && abs(a[i][j]-a[i][j+1])<=10){
                    ma = a[i][j]+a[i][j+1];
                    x = i, y = j;
                }
                if(i+1<h && a[i][j]+a[i+1][j]>ma && abs(a[i][j]-a[i+1][j])<=10){
                    ma = a[i][j]+a[i+1][j];
                    x = i, y = j;
                }
            }
        }
        printf("%d %d\n",x+1,y+1);
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