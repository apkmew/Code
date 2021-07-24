/*
    Task	: 02_Food
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 23 June 2021 [00:23]
    Algo	: 
    Status	: 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,a,sum=0;
    cin >> n;
    while(n--){
        cin >> a;
        sum += a;
    }
    cout << sum;
    return 0;
}