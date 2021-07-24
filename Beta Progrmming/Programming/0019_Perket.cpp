/*
    TASK : Perket
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
int s[15],b[15];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,i,j,ss,bb,mn=2e9;
    cin >> n;
    for(i=0;i<n;i++) cin >> s[i] >> b[i];
    for(i=0;i<n;i++){
        ss = 1; bb = 0;
        for(j=i;j<n;j++){
            ss *= s[j]; bb += b[i];
            mn = min(mn,abs(ss-bb));
        }
    }
    cout << mn;
    return 0;
}