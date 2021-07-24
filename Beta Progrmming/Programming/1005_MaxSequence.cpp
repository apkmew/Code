/*
    Task	: 1005_MaxSequence
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 18 May 2021 [07:50]
    Algo	: Kadane
    Status	: Debug
*/
#include<bits/stdc++.h>
using namespace std;
int a[3000],qs[3000];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,i,st=1,en,ans1,ans2,mx=0;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> a[i];
    }
    for(i=1;i<=n;i++){
        qs[i] = a[i] + qs[i-1];
        if(qs[i]<=0){
            qs[i] = 0;
            st = i+1;
        }
        else en = i;
        if(qs[i]>mx){
            ans1 = st;
            ans2 = en;
            mx = qs[i];
        }
    }
    if(mx==0) cout << "Empty Sequence";
    else{
        for(i=ans1;i<=ans2;i++) cout << a[i] << " ";
        cout << "\n" << mx;
    }
    return 0;
}