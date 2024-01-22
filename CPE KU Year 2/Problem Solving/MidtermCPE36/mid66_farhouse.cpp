/*
    Task	: mid66_farhouse
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 22 January 2024 [15:20]
    Algo	: Greedy
    Status	: Completed
*/
#include <bits/stdc++.h>
using namespace std;
int house[100100];
int main()
{
    int n, k, l, mx = -1;
    cin >> n >> k >> l;
    for( int i = 0; i < n; i++ ){
        cin >> house[i];
    }
    sort( house, house+n );
    int dis = k + l;
    for( int i = 0; i < n - dis; i++ ){
        int d = house[ i + dis ] - house[i];
        mx = max( mx, d );
    }
    cout << mx;
    return 0;
}