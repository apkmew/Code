/*
    TASK : A. Watermelon
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n;
    cin >> n;
    if(n%2==0 && n!=2) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}