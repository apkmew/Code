/*
    Task	: 0030_3-11
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 18 May 2021 [07:29]
    Algo	: Bignum
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
char a[1001000],b[1001000];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int len,i;
    cin >> a;
    strcpy(b,a);
    len = strlen(a);
    for(i=0;i<len;i++){
        a[i] -= '0';
        a[i] = a[i]-((a[i]/3)*3);
        a[i+1] += a[i]*10;
        a[i] += '0';
    }
    for(i=0;i<len;i++){
        b[i] -= '0';
        b[i] = b[i]-((b[i]/11)*11);
        b[i+1] += b[i]*10;
        b[i] += '0';
    }
    if(b[len-1]=='0'+10) cout << a[len-1] << " 10";
    else cout << a[len-1] << " " << b[len-1];
    return 0;
}