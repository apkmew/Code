/*
    Task	: 02_Sort
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 10 November 2021 [23:35]
    Algo	: Loop
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int a[100100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,i;
    cin >> n;
    for(i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    for(i=0;i<n;i++) cout << a[i] << ' ';
    return 0;
}