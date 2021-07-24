/*
    Task	: Beam [ KU01 ]
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 09 May 2021 [21:27]
    Algo	: Controlflow ( Loop + If-Else )
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int a[550][5],b[550][5];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,m,i,j,ans=0,ch;
    cin >> n >> m;
    for(i=1;i<=n;i++){
        cin >> a[i][0];
        a[i][1] = i%2;
    }
    for(i=1;i<=m;i++){
        cin >> b[i][0];
        b[i][1] = i%2;
    }
    i = j = 0;
    while(i<=n && j<=m){
        ch = 0;
        while(a[i][0]<=b[j][0] && i<n){
            i++;
            ch = 1;
            if(a[i][1]!=b[j][1] && a[i-1][0]!=b[j][0]) ans++;
            else if(a[i][0]<=b[j][0] && a[i-1][0]>b[j-1][0]) ans++;
            else if(a[i][0]>=b[j][0] && a[i-1][0]<b[j-1][0]) ans++;
        }
        while(b[j][0]<a[i][0] && j<m){
            j++;
            ch = 1;
            if(b[j][1]!=a[i][1] && a[i][0]!=b[j-1][0]) ans++;
            else if(b[j][0]<=a[i][0] && b[j-1][0]>a[i-1][0]) ans++;
            else if(b[j][0]>=a[i][0] && b[j-1][0]<a[i-1][0]) ans++;
        }
        if(!ch) break;
    }
    cout << ans+1;
    return 0;
}