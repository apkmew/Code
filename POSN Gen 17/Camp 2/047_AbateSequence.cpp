/*
    Task	: 047_AbateSequence
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 10 May 2021 [19:12]
    Algo	: LIS
    Status	: Incomplete
*/
#include<bits/stdc++.h>
using namespace std;
int a[100100],ans[100100];
vector<int> v[100100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,k,n,cou=0,mx=-1,x;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a[i];
        mx = max(mx,a[i]);
    }
    for(i=0;i<n;i++){
        x = mx - a[i];
        k = lower_bound(ans,ans+cou,x)-ans;
        v[k].push_back(x);
        if(k==cou) cou++;
        ans[k] = x;
    }
    cout << cou << "\n";
    cou--;
    int cnt = cou+1;
    ans[cou] = v[cou][0];
    cou--;
    while(cou>=0){
        for(i=0;i<v[cou].size();i++){
            if(v[cou][i]<ans[cou+1]){
                ans[cou] = v[cou][i];
                cou--;
                break;
            }
        }
    }
    for(i=0;i<cnt;i++){
        cout << mx - ans[i] << " ";
    }
    return 0;
}