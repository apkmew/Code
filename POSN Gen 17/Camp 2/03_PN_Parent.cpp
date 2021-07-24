/*
    TASK : PN_Parent
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
stack<int> st;
int cou[110];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,m,mx,mxx=-1;
    char a;
    cin >> n;
    m = n/2;
    while (n--)
    {
        cin >> a;
        if(a=='(') st.push(0);
        if(a==')'){
            mx = -1;
            while (st.top()!=0)
            {
                mx = max(mx,st.top());
                st.pop();
            }
            st.pop();
            if(mx==-1) mx = 0;
            st.push(mx+1);
            cou[mx+1]++;
            mxx = max(mxx,mx+1);
        }
    }
    cout << m << "\n";
    cout << mxx << "\n";
    n = 1;
    while (cou[n]!=0)
    {
        cout << cou[n++] << " ";
    }
    return 0;
}
/*
16
((())(()((()))))
*/