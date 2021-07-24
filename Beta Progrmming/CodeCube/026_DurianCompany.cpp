/*
    Task	: 026_DurianCompany
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 23 June 2021 [18:42]
    Algo	: 
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int a[1000100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,x,y,i,mn=2e6,mx=-1,ans=-1;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> x >> y;
        a[x]++;
        a[y]--;
        mx = max(mx,y);
        mn = min(mn,x);
    }
    for(i=mn;i<=mx;i++){
        a[i] += a[i-1];
        ans = max(ans,a[i]);
    }
    cout << ans;
    return 0;
}