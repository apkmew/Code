/*
    TASK: Hogwarts
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int a[100][100],room[100][100],sum,cou,ma=-1,w,h;
void play(int i,int j){
    room[i][j] = 1;
    if(i+1<h&& room[i+1][j]==0 && a[i][j] & 8){
        //a[i][j]-=8;
        sum++;
        play(i+1,j);
    }
    if(j+1<w&& room[i][j+1]==0 && a[i][j] & 4){
        //a[i][j]-=4;
        sum++;
        play(i,j+1);
    }

    if(i-1>=0 && room[i-1][j]==0 && a[i][j] & 2){
        //a[i][j]-=2;
        sum++;
        play(i-1,j);
    }
    if(j-1>=0 && room[i][j-1]==0 && a[i][j] & 1){
        //a[i][j]-=1;
        sum++;
        play(i,j-1);
    }
    return ;
}
int main()
{
    int i,j;
    scanf("%d %d",&w,&h);
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            scanf("%d",&a[i][j]);
            a[i][j] = 15 - a[i][j];
        }
    }
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            if(!room[i][j]){
                room[i][j]=1;
                sum = 1;
                play(i,j);
                cou++;
                ma = max(sum,ma);
            }
        }
    }
    printf("%d\n%d",cou,ma);
    return 0;
}
/*
7 4
11 6 11 6 3 10 6
7 9 6 13 5 15 5
1 10 12 7 13 7 5
13 11 10 8 10 12 13
*/
