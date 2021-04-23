/*
    TASK : Van Booking 2
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
struct A{
    int d,num;
    bool operator<(const A& o)const{
        if(d!=o.d) return d > o.d;
        return num > o.num;
    }
};
priority_queue<A> h;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,n,m,d;
    cin >> n >> m;
    for(i=1;i<=m;i++) h.push({0,i});
    while(n--){
        cin >> d;
        d += h.top().d; i = h.top().num;
        h.pop();
        cout << i << "\n";
        h.push({d,i});
    }
    return 0;
}
/*
6 3
3
1
2
2
2
1
*/