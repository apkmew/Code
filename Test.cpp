/*
    Task	: Test
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 10 October 2023 [23:44]
    Algo	: 
    Status	: 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n, i, j;
    cin >> n;
    for( i = 0 ; i < n ; i++ ){
        for( j = 0 ; j < n ; j++ ){
            if( i == j ) cout << "X";
            else cout << "-";
        }
        cout << "\n";
    }
    return 0;
}