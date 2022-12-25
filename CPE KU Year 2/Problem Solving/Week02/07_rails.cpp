/*
    Task	: 07_rails
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 25 December 2022 [13:25]
    Algo	: Stack
    Status	: Debugging
*/
#include<bits/stdc++.h>
using namespace std;
int a[1010];
stack<int> st;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,i,cou;
    while(1){
        cin >> n;
        if(!n) break;
        while(1){
            cin >> a[0];
            if(!a[0]) break;
            for(i=1;i<n;i++) cin >> a[i];
            cou = 1;
            for(i=0;i<n;i++){
                if(st.empty()) st.push(cou++);
                while(!st.empty() && st.top() != a[i] && cou<=n) st.push(cou++);
                if(st.top() == a[i]) st.pop();
                else break;
            }
            if(st.empty()) cout << "Yes\n";
            else cout << "No\n";
            while(!st.empty()) st.pop();
        }
        cout << "\n";
    }
    return 0;
}
/*
5
1 2 3 4 5
5 4 1 2 3
0
6
6 5 4 3 2 1
0
0
*/