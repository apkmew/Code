/*
    TASK : P Value
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
int ans[100100];
int main(){
    int i,cou=0,n;
    cin >> n;
    if(n<0){ cout << "-1"; return 0; }
    if(n==0){ cout << "10"; return 0; }
    if(n<10){ cout << n; return 0; }
    for(i=9;i>1&&n>1;){
        if(n%i==0){
            ans[cou++]=i; n/=i;
            continue;
        }
        i--;
    }
    if(n!=1){ cout << "-1"; return 0; }
    for(i=cou-1;i>=0;i--){
        cout << ans[i];
    }
    return 0;
}