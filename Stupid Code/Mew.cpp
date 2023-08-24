/*
    Task	: Mew
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 16 August 2023 [14:00]
    Algo	: 
    Status	: 
*/
#include<bits/stdc++.h>
using namespace std;
int a[10000010];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i;
    for(i=1;i<=10000000;i++){
        a[i]=a[i-1]+i;
    }
    cout << a[10000000];
    return 0;
}