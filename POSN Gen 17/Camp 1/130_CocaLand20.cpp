/*
    TASK : Coca Land 2.0
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
// type 1 alien , type 2 normal , type 3 never die
struct A{
    int type,beau,day,beau2;
    bool operator<(const A& o)const{
        if(beau!=o.beau) return beau > o.beau;
        if(type!=o.type) return type > o.type;
        if(day!=o.day) return day > o.day;
        return beau2 > o.beau2;
    }
};
priority_queue<A> h;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,n,opr,beau,day,beau2,type,ch;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> opr;
        if(opr==1){
            cin >> beau >> day;
            h.push({2,beau,day,0});
        }
        if(opr==2){
            cin >> beau;
            h.push({3,beau,100100,0});
        }
        if(opr==3){
            cin >> beau >> day >> beau2;
            h.push({1,beau,day,beau2});
        }
        if(opr==4){
            ch = 0;
            if(h.empty()){
                cout << "GREAN\n";
                continue;
            }
            while(!ch){
                type = h.top().type; beau = h.top().beau;
                day = h.top().day; beau2 = h.top().beau2;
                h.pop();
                if(type==1){
                    if(i>=day) h.push({3,beau2,100100,0});
                    else{ ch = 1; cout << beau << "\n"; }
                }
                else if(type==2){
                    if(i>=day) continue;
                    else{ ch = 1; cout << beau << "\n"; }
                }
                else if(type==3){
                    ch = 1;
                    cout << beau << "\n";
                }
            }  
        }
    }
    return 0;
}
/*
11
2 5
4
4
1 10 5
2 15
4
3 20 8 40
2 30
2 45
4
4
*/