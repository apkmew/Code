/*
    Task	: 02_wintsch
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 27 February 2023 [13:41]
    Algo	: Dynamic Programming
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int s,t,w;
    bool operator < (const A&o) const{
        if(t!=o.t) return t<o.t;
        return w>o.w;
    }
};
A a[1010];
pair<int,int> dp[1010];
vector<int> ans;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,i,j;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a[i].s >> a[i].t >> a[i].w;
    }
    sort(a,a+n);
    dp[0] = {a[0].t,a[0].w};
    for(i=1;i<n;i++){
        if(a[i].s>=dp[i-1].first){
            dp[i] = {a[i].t,a[i].w+dp[i-1].second};
        }
        else{
            j = i;
            while(a[i].s<a[j].t){
                j--;
            }
            int new_weight = a[i].w+dp[j].second;
            if(new_weight>dp[i-1].second){
                dp[i] = {a[i].t,new_weight};
            }
            else{
                dp[i] = dp[i-1];
            }
        }
    }
    cout << dp[n-1].second << "\n";
    int t = dp[n-1].first, w = dp[n-1].second;
    for(i=n-1;i>=0;i--){
        if(a[i].t==t && dp[i].second==w){
            ans.push_back(i+1);
            t = a[i].s;
            w -= a[i].w;
        }
    }
    cout << ans.size() << "\n";
    for(i=ans.size()-1;i>=0;i--){
        cout << ans[i] << " ";
    }
    return 0;
}
/*
3
1 3 2
2 4 3
3 5 2
3
1 3 2
2 4 10
3 5 2
*/