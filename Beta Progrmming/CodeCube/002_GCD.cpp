/*
    Task	: 002_GCD
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 15 May 2021 [23:42]
    Algo	: GCD
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    long long a,b;
    cin >> a >> b;
    cout << __gcd(a,b);
    return 0;
}