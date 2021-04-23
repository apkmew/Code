/*
    TASK : Break
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
stack<pair<int,int> > st;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,a,b;
    cin >> n;
    while(n--){
        cin >> a >> b;
        while(!st.empty() && st.top().first<a){
            cout << st.top().second << "\n";
            st.pop();
        }
        st.push({a,b});
    }
    return 0;
}
/*
5
1 10
5 20
3 30
3 40
4 50
*/