/*
    Task	: mid66_boats
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 22 January 2024 [15:21]
    Algo	: Greedy + Binary Search
    Status	: Completed
*/
#include <bits/stdc++.h>
using namespace std;
int y[200100];
set<int> x;
map<int, int> mp;
int main(){
    int n, m, xx;
    cin >> n >> m;
    for( int i = 0; i < n; i++ ){
        cin >> xx;
        x.insert(xx);
        mp[xx]++;
    }
    for( int i = 0; i < m; i++ ){
        cin >> y[i];
    }
    for( int i = 0; i < m; i++ ){
        int people = y[i];
        set<int>::iterator it;
        it = x.lower_bound( people );
        if( it == x.end() ){
            cout << i;
            return 0;
        }
        int value = *it;
        mp[value]--;
        if( mp[value] <= 0 ){
            x.erase(it);
        }
    }
    return 0;
}