/*
    Task	: 060_FC_OilDrilling
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 11 May 2021 [16:04]
    Algo	: Set
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
set<int> s;
set<int> ::iterator it1,it2;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int a,n,k,x;
    cin >> n >> k;
    while(k--){
        cin >> a;
        if(s.empty()){
            cout << n << "\n";
            s.insert(a);
            continue;
        }
        it1 = it2 = s.lower_bound(a);
        it1--;
        if(it2 == s.begin()) cout << (*it2) - a << "\n";
        else if(it2 == s.end()) cout << a - (*it1) << "\n";
        else cout << min((a-(*it1)),((*it2)-a)) << "\n";
        s.insert(a);
    }
    return 0;
}
/*
11 3
3 6 10
*/