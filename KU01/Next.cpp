/*
    Task	: Next
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 15 November 2021 [01:06]
    Algo	: Graph
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int a[100100],ch[100100];
int play(int j){
    int i = j,cou = 0;
    while(!ch[i]){
        cou++;
        ch[i] = 1;
        i = a[i];
    }
    return cou;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,i,mx=-1;
    cin >> n;
    for(i=1;i<=n;i++) cin >> a[i];
    for(i=1;i<=n;i++){
        if(!ch[i]){
            mx = max(mx,play(i));
        }
    }
    cout << mx;
    return 0;
}