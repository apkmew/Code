/*
    TASK : Parenthesis
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
stack<char> st;
string a;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int q,len,i;
    cin >> q;
    while(q--){
        cin >> a;
        len = a.size();
        for(i=0;i<len;i++){
            if(!st.empty() && a[i]==')' && st.top()=='('){ st.pop(); continue; }
            if(!st.empty() && a[i]==']' && st.top()=='['){ st.pop(); continue; }
            else st.push(a[i]);
        }
        if(st.empty()) cout << "Yes\n";
        else cout << "No\n";
        while(!st.empty()) st.pop();
    }
    return 0;
}
/*
3
([])
(([()])))
([()[]()])()
*/