/*
    TASK : Mazu
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
stack<char> st;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n;
    char c;
    cin >> n;
    while(n--){
        cin >> c;
        if(!st.empty() && st.top()==c){ st.pop(); continue; }
        else st.push(c);
    }
    if(st.empty()){ cout << "0\nempty"; }
    else{ 
        cout << st.size() << "\n"; 
        while(!st.empty()){
            cout << st.top();
            st.pop();
        }
    }
    return 0;
}
/*
5
A
D
D
D
C
*/