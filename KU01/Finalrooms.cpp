/*
    Task	: Finalrooms
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 30 July 2022 [20:23]
    Algo	: Recursive
    Status	: Incomplete
*/
#include<bits/stdc++.h>
using namespace std;
int r,c,ans=0,gift[1000][5],cou=0;
char a[50][50];
void play(int i,int j){
    int k,x,y;
    if(a[i][j]=='*') ans++;
    if(a[i][j]=='W'){
        for(k=0;k<cou;k++){
            x = gift[k][0];
            y = gift[k][1];
            if(a[x][y]=='W'){
                a[x][y] = '.';
                play(x,y);
            }
        }
    }
    a[i][j] = '#';
    if(i+1<r  && a[i+1][j]!='#') play(i+1,j);
    if(i-1>=0 && a[i-1][j]!='#') play(i-1,j);
    if(j+1<c  && a[i][j+1]!='#') play(i,j+1);
    if(j-1>=0 && a[i][j-1]!='#') play(i,j-1);
    a[i][j] = '.';
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,j,sti,stj;
    cin >> r >> c;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin >> a[i][j];
            if(a[i][j]=='A'){
                sti=i;
                stj=j;
            }
            if(a[i][j]=='W'){
                gift[cou][0]=i;
                gift[cou][1]=j;
                cou++;
            }
        }
    }
    play(sti,stj);
    cout << ans;
    return 0;
}
/*
5 7
A*.#...
..#..*#
.*####.
##..#..
.#.*#..
5 7
A*.#...
.W#..*#
.*####.
##WW#.W
W#.*#..
*/