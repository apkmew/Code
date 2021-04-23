/*
    TASK : Swift Wood Cut
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
long long a[1000100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    long long sum,i,l,r,mid,n,m;
    cin >> n >> m;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    l = 0; r = 20000000000000000;
    while(l<r){
        mid = (l+r)/2+1;
        sum = 0;
        for(i=0;i<n;i++){
            if(a[i]-mid>0) sum += a[i] - mid;
        }
        if(sum<m) r = mid - 1;
        else l = mid;
    }
    cout << l;
    return 0;
}
/*
4 7
20 15 10 17
5 20
4 42 40 26 46
*/