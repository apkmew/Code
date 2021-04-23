/*
    TASK : 
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
struct A{
    int id,rank,q;
    bool operator<(const A& o)const{
        if(rank!=o.rank) return rank < o.rank;
        return q > o.q;
    }
};
priority_queue<A> h;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,r,i,opr,id,rank;
    cin >> n >> r;
    for(i=0;i<n;i++){
        cin >> opr;
        if(opr==1){
            cin >> id >> rank;
            h.push({id,rank,i});
        }
        if(opr==2){
            if(h.empty()){
                cout << "-1\n";
                continue;
            }
            id = h.top().id; rank = h.top().rank;
            h.pop();
            cout << id << "\n";
        }
    }
    return 0;
}
/*
6 5
2
1 20 4
1 11 4
2
1 3 5
2
*/