/*
    Task	: 04_LoveNote
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 23 June 2021 [00:44]
    Algo	:
    Status	:
*/
#include<bits/stdc++.h>
using namespace std;
char a[20];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,j,len;
    cin >> a;
    len = strlen(a);
    for(i=0;i<len;i++){
        for(j=0;j<len;j++){
            if(i==j) cout << a[j] - 32;
            else cout << a[j];
        }
        cout << "\n";
    }
    return 0;
}
