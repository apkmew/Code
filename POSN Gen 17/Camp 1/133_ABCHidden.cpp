/*
    TASK : ABC Hidden
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
long long a[1000100],c[1000100];
string str;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    long long len,q,i,ans;
    cin >> q;
    while (q--)
    {
        ans = 0;
        cin >> str;
        len = str.size();
        for(i=0;i<len;i++){
            if(str[i]=='A') a[i]++;
            if(i>0) a[i] += a[i-1];
        }
        for(i=len-1;i>=0;i--){
            if(str[i]=='C') c[i]++;
            if(i<len-1) c[i] += c[i+1];
        }
        for(i=0;i<len;i++){
            if(str[i]=='B'){
                ans += a[i]*c[i];
            }
        }
        cout << ans << "\n";
        memset(a,0,sizeof a);
        memset(c,0,sizeof c);
    }
    return 0;
}
/*
4
ABC
AABC
ABAABBCC
AB
*/