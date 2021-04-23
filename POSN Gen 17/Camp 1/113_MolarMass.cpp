/*
    TASK : Molar Mass
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
stack<int> st;
char a[150];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,len,q,num;
    cin >> q;
    while(q--){
        cin >> a;
        len = strlen(a);
        for(i=0;i<len;i++){
            if(isalpha(a[i])){
                switch(a[i]){
                    case 'H': st.push(1); break;
                    case 'C': st.push(12); break;
                    case 'O': st.push(16); break;
                }
            }
            else if(isdigit(a[i])){
                num = st.top();
                st.pop();
                num *= a[i] - '0';
                st.push(num);
            }
            else if(a[i]=='(') st.push(-1);
            else if(a[i]==')'){
                num = 0;
                while(st.top()!=-1){
                    num += st.top();
                    st.pop();
                }
                st.pop();
                st.push(num);
            }
        }
        num = 0;
        while(!st.empty()){
            num += st.top();
            st.pop();
        }
        cout << num << "\n";
    }
    return 0;
}
/*
2
COOH
(C(H2O)2)3
*/