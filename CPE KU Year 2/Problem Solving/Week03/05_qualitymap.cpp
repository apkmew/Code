/*
    Task	: 05_qualitymap
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 26 December 2022 [14:11]
    Algo	: Recursion
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int n,m,di[]={0,0,1,-1},dj[]={1,-1,0,0},mark[50][50],ans1=0,ans2=0,ch1,ch2,cou;
char a[50][50];
void play(int i,int j){
    mark[i][j] = 1;
    cou++;
    int k,ii,jj;
    if(a[i][j] == '*') ch1 = 1;
    if(a[i][j] == '$') ch2 = 1;
    for(k=0;k<4;k++){
        ii = di[k]+i; jj = dj[k]+j;
        if(ii<0 || ii>=n || jj<0 || jj>=m) continue;
        if(mark[ii][jj]) continue;
        if(a[ii][jj] == '#') continue;
        play(ii,jj);
    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,j;
    cin >> n >> m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j] != '#' && !mark[i][j]){
                ch1 = ch2 = cou = 0;
                play(i,j);
                if(ch1 && ch2) ans1 += cou;
                else if(ch1 || ch2) ans2 += cou;
            }
        }
    }
    cout << ans1 << " " << ans2 << "\n";
    return 0;
}
/*
7 8
.*..#...
....#...
.$.#..*#
..#..##.
.#.##...
#....###
..$.....
*/