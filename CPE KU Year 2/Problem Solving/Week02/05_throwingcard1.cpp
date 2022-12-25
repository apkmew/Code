/*
    Task	: 05_throwingcard1
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 19 December 2022 [15:22]
    Algo	: Linked list
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
list<int> l;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,i;
    while(1){
        cin >> n;
        if(n == 0) break;
        for(i=1;i<=n;i++){
            l.push_back(i);
        }
        cout << "Discarded cards:";
        while(l.size() != 1){
            cout << " " << l.front();
            if(l.size() != 2) cout << ",";
            l.pop_front();
            l.push_back(l.front());
            l.pop_front();
        }
        cout << "\nRemaining card: " << l.front() << "\n";
        l.clear();
    }
    return 0;
}
/*
7
19
10
6
0
*/