/*
    TASK: Beehive
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[1010][1010],cc[1010][1010];
int main()
{
    int n,m,i,j,tmp,cou;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(j=1;j<=m;j++) cc[1][j] = 1;
    for(i=2;i<=n;i++){
        for(j=1;j<=m;j++){
            cou = 0, tmp = 0;
            if(i%2==1){
                if(tmp<a[i-1][j-1]){
                    tmp = a[i-1][j-1];
                    cou += cc[i-1][j-1];
                }
            }
            else if(i%2==0){
                if(tmp<a[i-1][j+1]){
                    tmp = a[i-1][j+1];
                    cou += cc[i-1][j+1];
                }
            }
            if(tmp<a[i-1][j]){
                tmp = a[i-1][j];
                cou = cc[i-1][j];
            }
            else if(tmp==a[i-1][j]){
                cou += cc[i-1][j];
            }
            cc[i][j] = cou;
            a[i][j] += tmp;
        }
    }
    tmp = 0;
    cou = 0;
    for(j=1;j<=m;j++){
        if(tmp<a[n][j]){
            tmp = a[n][j];
            cou = cc[n][j];
        }
        else if(tmp == a[n][j]){
            cou += cc[n][j];
        }
    }
    printf("%d %d\n",tmp,cou);
    return 0;
}
/*
7 5
10 8 25 13 16
4 23 12 1 14
14 17 0 11 26
6 3 3 8 10
4 5 16 5 14
8 4 4 1 7
8 3 1 4 5
*/
