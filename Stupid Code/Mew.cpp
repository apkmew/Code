#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    while(1){
        int n;
        cin>>n;
        if(n==0) break;
        list<int> a;
        int c=0,i;
        for(i=1;i<=n;i++){
            a.push_back(i);
        }
        cout << "Discarded cards: " << a.front();
        while(a.size() != 2){
            a.pop_front();
            a.push_back(a.front());
            a.pop_front();
            cout << ", " << a.front() ;
        }
        a.pop_front();
        cout << endl;
        cout << "Remaining card: " << a.front() << endl;
    }
    return 0;
}