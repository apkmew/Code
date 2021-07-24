/*
    Task	: 004_GreedWallOfSiam
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 15 May 2021 [23:47]
    Algo	: GCD
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    long long n,h,a,sum;
    cin >> n;
    cin >> a;
    n--;
    sum = a;
    while(n--){
        cin >> h;
        sum += h;
        a = __gcd(h,a);
    }
    cout << sum/a;
    return 0;
}