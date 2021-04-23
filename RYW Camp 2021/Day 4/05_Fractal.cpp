/*
    TASK : Fractal
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
    LANG : C++
*/
#include <bits/stdc++.h>
using namespace std;
char a[2100][1100];
int main(){
    int i,j,n,k,x,y;
    memset(a,'-',sizeof a);
    a[1][1] = '*';
    scanf("%d",&k);
    for(n=2;n<=k;n++){
        x = pow(2,n-1);
        y = pow(2,n-2);
        for(i=0;i<=x;i++) a[x][i] = '*';
        for(i=1;i<x;i++){
            for(j=1;j<=y;j++){
                a[x+i][y+j] = a[i][j];
            }
        }
    }
    for(i=1;i<=pow(2,k)-1;i++){
        for(j=1;j<=pow(2,k-1);j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}