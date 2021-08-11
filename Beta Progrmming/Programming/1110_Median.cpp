/*
    Task	: 1110_Median
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 11 August 2021 [11:35]
    Algo	: Dynamic Programming
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
long long nub[1001000];
map<long long,pair<long long,long long> > mp;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    long long n,k,i,num,idxmd,ans=0;
    cin >> n >> k;
    for(i=1;i<=n;i++){
        cin >> num;
        if(num > k) nub[i] = nub[i-1] + 1;
        else if(num < k) nub[i] = nub[i-1] - 1;
        else nub[i] = nub[i-1];
        if(num == k) idxmd = i;
        mp[nub[i]] = {0,0};
    }
    for(i=1;i<idxmd;i++){
        if(i%2==0) mp[nub[i]].first += 1;
        else mp[nub[i]].second += 1;
    }
    mp[0].first += 1;
    for(i=idxmd;i<=n;i++){
        if(i%2==0) ans += mp[nub[i]].second;
        else ans += mp[nub[i]].first;
    }
    cout << ans;
    return 0;
}