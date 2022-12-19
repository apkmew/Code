/*
    Task	: 02_ic
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 19 December 2022 [13:47]
    Algo	: linked list
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
list<int> l;
char opr[5];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,num;
    cin >> n;
    while(n--){
        cin >> opr;
        if(!strcmp(opr,"ri")){
            cin >> num;
            l.push_back(num);
        }
        else if(!strcmp(opr,"li")){
            cin >> num;
            l.push_front(num);
        }
        else if(!strcmp(opr,"lr")){
            l.push_back(l.front());
            l.pop_front();
        }
        else if(!strcmp(opr,"rr")){
            l.push_front(l.back());
            l.pop_back();
        }
    }
    for(auto x:l){
        cout << x << "\n";
    }
    return 0;
}
/*
8
ri 1
ri 2
ri 3
li 20
ri 100
lr
ri 1000
rr
*/