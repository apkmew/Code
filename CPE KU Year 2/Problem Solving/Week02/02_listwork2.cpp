/*
    Task	: 02_listwork2
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 19 December 2022 [14:20]
    Algo	: linked list
    Status	: Incomplete
*/
#include<bits/stdc++.h>
using namespace std;
list<int> l;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,num;
    char opr;
    cin >> n;
    while(n--){
        cin >> opr >> num;
        if(opr == 'I'){
            l.push_front(num);
        }
        else if(opr == 'A'){
            l.push_back(num);
        }
        else if(opr == 'D'){
            list<int>::iterator it = l.begin();
            advance(it,num-1);
            if(num<=l.size()) l.erase(it);
        }
    }
    for(auto x:l){
        cout << x << "\n";
    }
    return 0;
}
/*
6
A 10
I 20
D 2
A 15
I 30
D 2
*/