/*
    Task	: 01_Pod
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 05 November 2022 [11:39]
    Algo	: Brute-Force
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int a[310];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,k,num,i,ans=0;
    cin >> n >> k;
    while(n--){
        cin >> num;
        a[num]++;
        for(i=1;i<=k;i++){
            if(a[i]==0) goto next;
        }
        for(i=1;i<=k;i++){
            a[i]--;
        }
        next:;
    }
    for(i=1;i<=k;i++){
        ans += a[i];
    }
    cout << ans;
    return 0;
}