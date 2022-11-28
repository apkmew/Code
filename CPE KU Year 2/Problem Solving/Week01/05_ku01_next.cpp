#include <bits/stdc++.h>
using namespace std;
int a[100100],ch[100100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,i,ans=-1,j,nub;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> a[i];
    }
    for(i=1;i<=n;i++){
        if(!ch[i]){
            nub = 0;
            j = i;
            while(!ch[j]){
                ch[j] = 1;
                j = a[j];
                nub++;
            }
            ans = max(ans,nub);
        }
    }
    cout << ans;
    return 0;
}