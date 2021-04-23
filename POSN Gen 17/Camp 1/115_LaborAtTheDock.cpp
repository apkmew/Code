/*
    TASK : Labor at the Dock
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
long long a[1001000];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    long long sum,i,n,m,l,r,mid;
    cin >> n >> m;
    for(i=0;i<n;i++){
        cin >> a[i]; 
    }
    l =1; r = 20000000000000000;
    while(l<r){
        mid = (l+r)/2;
        sum = 0;
        for(i=0;i<n;i++){
            sum += mid/a[i];
        }
        if(sum < m) l = mid + 1;
        else r = mid; 
    }
    cout << l;
    return 0;
}
/*
2 6
7
10
*/