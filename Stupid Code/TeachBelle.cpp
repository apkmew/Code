#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    int q;
    cin >> q;
    while(q--){
        cin >> a;
        b.append(a,0,1);
        for(int i=1;i<a.size();i++){
            if(a[i]!=a[i-1]) b.append(a,i,1);
        }
        a = b;
        reverse(a.begin(),a.end());
        if(a==b) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}