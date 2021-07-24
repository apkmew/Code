/*
    Task	: 046_TarnSequence
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 10 May 2021 [18:58]
    Algo	: LIS
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int a[100100],ans[100100];
vector<int> v[100100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,k,n,cou=0;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    for(i=0;i<n;i++){
        k = lower_bound(ans,ans+cou,a[i])-ans;
        v[k].push_back(a[i]);
        if(k==cou) cou++;
        ans[k] = a[i];
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
        cout << ans[i] << " ";
    }
    return 0;
}