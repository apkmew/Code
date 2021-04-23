/*
    TASK : Plane MH370
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
map<string,int> mp;
string a;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int q,n,m;
    cin >> q;
    while(q--){
        cin >> n >> m;
        while(m--){
            cin >> a;
            mp[a] = 1;
        }
        if(mp.size()==n) cout << "yes\n";
        else cout << "no\n";
        mp.clear();
    }
    return 0;
}
/*
2
3 4
bangkok
phuket
pai
bangkok
3 1
phuket
*/