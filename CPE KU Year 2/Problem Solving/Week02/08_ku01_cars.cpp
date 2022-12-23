/*
    Task	: 08_ku01_cars
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 23 December 2022 [09:55]
    Algo	: 
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int v[200100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,n,p,mx=-1,ans=0;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> p >> v[i];
    }
    for(i=n-1;i>=0;i--){
        if(v[i]<=mx) ans++;
        mx = max(mx,v[i]);
    }
    cout << ans;
    return 0;
}