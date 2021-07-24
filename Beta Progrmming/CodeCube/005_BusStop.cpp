/*
    Task	: 005_BusStop
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 15 May 2021 [23:52]
    Algo	: LCD
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    long long n,a,t;
    cin >> n;
    cin >> a;
    n--;
    while(n--){
        cin >> t;
        a = a*t/__gcd(a,t);
    }
    cout << a;
    return 0;
}