/*
    Task	: 022_Dot
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 23 June 2021 [18:35]
    Algo	: 
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int a[1010][1010];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,x,y,ans=0;
    cin >> n;
    while(n--){
        cin >> x >> y;
        if(!a[x][y]){
            a[x][y] = 1;
            ans++;
        }
    }
    cout << ans;
    return 0;
}