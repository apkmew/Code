/*
    Task	: 09_ku01_distinct
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 23 December 2022 [09:32]
    Algo	: Map
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int p[100100];
map<int,int> m;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,n,k;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> p[i];
        p[i] += p[i-1];
    }
    for(k=1;k<=n;k++){
        for(i=1;i<=n-k+1;i++){
            m[p[i+k-1]-p[i-1]] = 1;
        }
    }
    cout << m.size();
    return 0;
}