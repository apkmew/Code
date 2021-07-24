/*
    TASK : Pet
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int ans,n,i,j,sum,mx=-1;
    for(i=0;i<5;i++){
        sum = 0;
        for(j=0;j<4;j++){
            cin >> n;
            sum += n;
        }
        if(sum>mx){
            mx = sum;
            ans = i+1;
        }
    }
    cout << ans << " " << mx;
    return 0;
}