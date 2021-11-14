/*
    Task	: Jobs
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 15 November 2021 [00:57]
    Algo	: Math
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,num,a=0,b=0;
    cin >> n;
    while(n--){
        cin >> num;
        if(num <= 18) a++;
        else b++;
    }
    if(b <= a) cout << a + b;
    else cout << a*2 + (b-a)*2 - 1;
    return 0;
}