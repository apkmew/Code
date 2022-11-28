/*
    Task	: 02_Running
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 05 November 2022 [11:48]
    Algo	: 
    Status	: 
*/
#include<bits/stdc++.h>
using namespace std;
long long a[100100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    long long n,k,mn=2e9,i,ans=0;
    cin >> n >> k;
    for(i=0;i<n;i++){
        cin >> a[i];
        mn = min(mn,a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]*k-mn*k>mn) ans++;
    }
    cout << n-ans;
    return 0;
}