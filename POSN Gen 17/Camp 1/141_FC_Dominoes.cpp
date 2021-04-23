/*
    TASK : FC_Dominoes
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
int l[100100],r[100100],a[100100][5];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,i,mxr=-1,mxl=-1,ansl,ansr;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> a[i][0] >> a[i][1];
    }
    for(i=2;i<=n;i++){
        if(a[i][0]-a[i][1]<a[i-1][0]) l[i] = l[i-1] + 1;
        if(l[i] > mxl){
            mxl = l[i];
            ansl = i;
        }
    }
    for(i=n-1;i>=1;i--){
        if(a[i][0]+a[i][1]>a[i+1][0]) r[i] = r[i+1] + 1;
        if(r[i] >= mxr){
            mxr = r[i];
            ansr = i;
        }
    }
    if(mxl > mxr) cout << ansl << " L";
    else if(mxr > mxl) cout << ansr << " R";
    else if(mxr == mxl){
        if(ansl<=ansr) cout << ansl << " L";
        else cout << ansr << " R";
    }
    return 0;
}
/*
5
1 1
3 3
5 4
7 15
10 3
*/