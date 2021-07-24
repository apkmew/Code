/*
    Task	: 007_MangoEncryption
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 16 May 2021 [00:15]
    Algo	: String
    Status	: Incomplete
*/
#include<bits/stdc++.h>
using namespace std;
char a[1001000],b[1001000];
int ans[1001000];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,len;
    cin >> a >> b;
    len = strlen(a);
    for(i=0;i<len;i++){
        a[i] = toupper(a[i]); b[i] = toupper(b[i]);
        if(a[i]-b[i]<10 && a[i]>=b[i]) ans[i] = a[i]-b[i];
        else if((a[i]+26-b[i])<10 && a[i]<b[i]) ans[i] = a[i] + 26 - b[i];
        else{
            cout << "R.I.P.";
            return 0;
        }
    }
    for(i=0;i<len;i++) cout << ans[i];
    return 0;
}