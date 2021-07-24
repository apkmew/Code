/*
    Task	: 018_MaxMin
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 21 May 2021 [16:27]
    Algo	: Controlflow
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,a,mx=-2e9,mn=2e9;
    cin >> n;
    while(n--){
        cin >> a;
        mx = max(mx,a);
        mn = min(mn,a);
    }
    cout << mx << "\n" << mn;
    return 0;
}