/*
    Task	: 02_mid60_family
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 31 March 2023 [15:59]
    Algo	: Graph
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int tree[1010];
int fr(int a,int b){
    while(b != 1){
        if(a == b) return 1;
        b = tree[b];
    }
    return 0;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,m,i,num,a,b;
    cin >> n >> m;
    for(i=2;i<=n;i++){
        cin >> num;
        tree[i] = num;
    }
    while(m--){
        cin >> a >> b;
        if(a == 1 || b == 1) cout << "1\n";
        else if(fr(a,b)) cout << a << "\n";
        else if(fr(b,a)) cout << b << "\n";
        else cout << "-1\n";
    }
    return 0;
}