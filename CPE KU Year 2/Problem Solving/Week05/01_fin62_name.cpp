/*
    Task	: 01_fin62_name
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 24 January 2023 [09:08]
    Algo	: Greedy
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
char s[110],t[100100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int lens,lent,i,j=0,ans=0;
    cin >> s;
    cin >> t;
    lens = strlen(s);
    lent = strlen(t);
    for(i=0;i<lent;i++){
        if(t[i]==s[j]){
            j++;
            if(j==lens){
                ans++;
                j=0;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}
/*
pracha
thisisprachaheyproactivehappypramotechanochanell
*/