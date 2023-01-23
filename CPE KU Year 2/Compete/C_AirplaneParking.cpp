/*
    Task	: C_AirplaneParking
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 30 December 2022 [14:32]
    Algo	: Dynamic Programming - Divide and Conquer
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
pair<int,int> p[310];
vector<int> v;
int dp[610][610],a[610][610];
int park(int l,int r){
    if(l==r) return a[l][r];
    if(dp[l][r]!=-1) return dp[l][r];
    int mx=-1,i;
    for(i=l;i<r;i++){
        mx = max(mx,park(l,i)+park(i+1,r));
    }
    return dp[l][r] = mx + a[l][r];
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int q,n,i,l,r;
    cin >> q;
    while(q--){
        memset(dp,-1,sizeof dp);
        memset(a,0,sizeof a);
        v.clear();
        cin >> n;
        for(i=1;i<=n;i++){
            cin >> p[i].first >> p[i].second;
            p[i].second--;
            v.push_back(p[i].first);
            v.push_back(p[i].second);
        }
        sort(v.begin(),v.end());
        for(i=1;i<=n;i++){
            l = upper_bound(v.begin(),v.end(),p[i].first)-v.begin();
            r = upper_bound(v.begin(),v.end(),p[i].second)-v.begin();
            a[l][r]++;
        }
        cout << park(1,v.size()) << "\n";
    }
    return 0;
}
/*
2
4
1 10
2 5
3 7
6 9
3
10 12
10 15
13 17
*/