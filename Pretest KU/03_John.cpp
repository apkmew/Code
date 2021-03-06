/*
    Task	: 03_John
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 23 June 2021 [00:30]
    Algo	: 
    Status	: 
*/
#include<bits/stdc++.h>
using namespace std;
int a[1010][1010],b[1010][1010];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,m,i,j,smn=0,smx=0,mn,mx,cou;
    cin >> n >> m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }
    for(i=1;i<=n;i++){
        mx = -1; mn = 100100;
        for(j=1;j<=m;j++){
            if(!a[i][j]){
                cou = 0;
                if(b[i-1][j]) cou++;
                if(b[i+1][j]) cou++;
                if(b[i][j-1]) cou++;
                if(b[i][j+1]) cou++;
                if(cou) a[i][j] = (b[i-1][j] + b[i+1][j] + b[i][j-1] + b[i][j+1])/cou; 
            }
            mx = max(mx,a[i][j]);
            mn = min(mn,a[i][j]);
        }
        smn += mn;
        smx += mx;
    }
    cout << "Min : " << smn << '\n';
    cout << "Max : " << smx;
    return 0;
}