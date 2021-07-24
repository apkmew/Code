/*
    TASK : Kornislav
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
int a[5];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    sort(a,a+4);
    cout << a[0] * a[2];
    return 0;
}