/*
    Task	: 01_box
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 26 December 2022 [13:14]
    Algo	: Recursion
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
char a[50][50];
int n,m,di[]={0,0,1,-1},dj[]={1,-1,0,0},mark[50][50];
void play(int i,int j){
    //cout << i << " " << j << "\n";
    mark[i][j] = 1;
    int k,ii,jj;
    if(i==n-2){
        cout << "yes\n";
        exit(0);
    }
    for(k=0;k<4;k++){
        ii = di[k]+i; jj = dj[k]+j;
        if(ii<0 || ii>=n-1 || jj<0 || jj>=m-1) continue;
        if(mark[ii][jj]) continue;
        if(a[ii][jj]=='.' && a[ii][jj+1]=='.' && a[ii+1][jj]=='.' && a[ii+1][jj+1]=='.'){
            play(ii,jj);
        }
    }
    mark[i][j] = 0;
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
    for(i=0;i<m;i++){
        if(a[0][i]=='.' && a[0][i+1]=='.' && a[1][i]=='.' && a[1][i+1]=='.'){
            play(0,i);
        }
    }
    cout << "no\n";
    return 0;
}
/*
7 14
##..##...#.#..
##..##...#.#..
##.####..#.#..
#...#....#####
..........###.
####...######.
...#..##..###.
7 14
##..##...#.#..
##..##...#.#..
##.####..#.#..
#...#....#####
........#####.
####...######.
...#..##..###.
*/