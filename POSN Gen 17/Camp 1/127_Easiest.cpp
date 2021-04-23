/*
    TASK : Easiest
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
struct A{
    int d;
    bool operator<(const A& o)const{
        return d > o.d;
    }
};
priority_queue<A> h;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,a;
    char opr;
    cin >> n;
    while(n--){
        cin >> opr;
        if(opr=='A'){
            cin >> a;
            h.push({a});
        }
        if(opr=='B'){
            if(h.empty()){
                cout << "-1\n";
                continue;
            }
            a = h.top().d;
            h.pop();
            cout << a << "\n";
        }
    }
    return 0;
}
/*
9
A 7
A 3
A 5
A 3
B
A 4
B
B
B
*/