/*
    TASK : Golden Triangle
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
long long x[100100],y[100100],a[100100][5];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    long long i,n,cou=0,ii,jj;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a[i][0] >> a[i][1];
        x[a[i][0]]++;
        y[a[i][1]]++;
    }
    for(i=0;i<n;i++){
        ii = a[i][0]; jj = a[i][1];
        if(x[ii]>1 && y[jj]>1){
            cou += (x[ii]-1) * (y[jj]-1);
        }
    }
    cout << cou;
    return 0;
}
/*
5
1 2
2 1
2 2
2 3
3 2
*/