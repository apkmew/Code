/*
    Task	: 01_Light
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 23 June 2021 [00:16]
    Algo	: 
    Status	: 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    double a;
    int b;
    cin >> a;
    cin >> b;
    if(a<=1){
        if(b<=1000) cout << "NO";
        else cout << "YES";
    }
    else if(a<=4){
        if(b<=5000) cout << "NO";
        else cout << "YES";
    }
    else if(a<=8){
        if(b<=30000) cout << "NO";
        else cout << "YES";
    }
    else{
        if(b<=75000) cout << "NO";
        else cout << "YES";
    }
    return 0;
}