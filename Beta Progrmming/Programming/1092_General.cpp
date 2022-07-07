/*
    Task	: 1092_General
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 07 July 2022 [12:29]
    Algo	: Disjoint Set Union ( DSU )
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int z[100100],p[100100];
int fr(int i){
    if(p[i] == i) return i;
    return p[i] = fr(p[i]);
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,m,i,a,b,x,y;
    cin >> n >> m;
    for(i=1;i<=n;i++){
        cin >> z[i]; p[i] = i;
    } 
    while(m--){
        cin >> a >> b;
        x = fr(a);  y = fr(b);
        if(x == y){
            cout << "-1\n";
        }
        else if(z[x] > z[y] || z[x] == z[y] && x < y){
            z[x] += z[y] / 2;
            p[y] = x;
            cout << x << "\n";
        }
        else if(z[x] < z[y] || z[x] == z[y] && x > y){
            z[y] += z[x] / 2;
            p[x] = y;
            cout << y << "\n";
        }
    }
    return 0;
}