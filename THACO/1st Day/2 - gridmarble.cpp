/*
    TASK : gridmarble
    LANG : CPP
    AUTHOR : Apimook T.
*/
#include <bits/stdc++.h>
using namespace std;
void play(int i,int j){
    if(j+1<m) play(i,j+1);
    play(i+1,j);
}
char a[210][210];
int b[40100];
int main(){
    int i,j,n,m;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    play(0,0);
    return 0;
}
