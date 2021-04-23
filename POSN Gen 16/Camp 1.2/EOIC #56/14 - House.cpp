/*
    TASK: House
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int r,c,k,a[1010][1010],ma=-1;
void play(int i,int j){
    int l,now;
    now = a[i][j];
    for(l=1;l<=k;l++){
        if(l+i<r){
            if(l%2==1) now -= a[l+i][j];
            if(l%2==0) now += a[l+i][j];
        }
        if(i-l>=0){
            if(l%2==1) now -= a[i-l][j];
            if(l%2==0) now += a[i-l][j];
        }
        if(l+j<c){
            if(l%2==1) now -= a[i][j+l];
            if(l%2==0) now += a[i][j+l];
        }
        if(j-l>=0){
            if(l%2==1) now -= a[i][j-l];
            if(l%2==0) now += a[i][j-l];
        }
        if(l+i>=r && i-l<0 && l+j>=c && j-l<0) break;
    }
    ma = max(now,ma);
    now = 0;
    return ;
}
int main()
{
    int i,j;
    scanf("%d %d %d",&r,&c,&k);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            play(i,j);
        }
    }
    printf("%d",ma);
    return 0;
}
/*
5 4 2
2 2 3 5
3 2 4 0
5 3 1 2
0 2 0 1
3 2 1 5
*/
