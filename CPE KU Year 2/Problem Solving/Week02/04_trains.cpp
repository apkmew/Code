/*
    Task	: 04_trains
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 19 December 2022 [14:29]
    Algo	: linked list
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
list<int> l[100100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,i,j;
    char opr;
    cin >> n;
    while(n--){
        cin >> opr >> i >> j;
        if(opr == 'N'){
            l[j].push_back(i);
        }
        else if(opr == 'M'){
            l[j].splice(l[j].end(),l[i]);
            l[i].clear();
        }
    }
    for(i=1;i<=100000;i++){
        if(l[i].size() == 0) continue;
        for(auto x:l[i]){
            cout << x << "\n";
        }
    }
    return 0;
}
/*
7
N 1 1
N 2 1
N 3 2
M 1 2
N 4 1
N 5 3
M 3 1
*/