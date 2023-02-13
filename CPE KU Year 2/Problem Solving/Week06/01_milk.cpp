/*
    Task	: 01_milk
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 13 February 2023 [13:22]
    Algo	: DSU
    Status	: Incomplete
*/
#include<bits/stdc++.h>
using namespace std;
int p[100100];
int fr(int i){  // find root
    if(p[i]==i) return i;
    else        return p[i]=fr(p[i]);
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,q,x,y,i;
    char opr;
    cin >> n >> q;
    for(i=1;i<=n;i++)   p[i]=i;
    while(q--){
        cin >> opr >> x >> y;
        if(opr == 'c'){
            p[fr(x)] = fr(y);   // union
        }
        else if(opr == 'q'){
            if(fr(x)==fr(y))    cout << "yes\n";
            else                cout << "no\n";
        }
    }
    return 0;
}
/*
5 10
q 1 2
c 1 3
q 3 2
c 3 2
q 1 2
q 4 5
c 4 2
q 4 1
c 1 4
q 5 1
*/