/*
    Task	: 019_L-Sequence
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 21 May 2021 [16:33]
    Algo	: Vector + Controlflow
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,k,i,a;
    cin >> n >> k;
    for(i=0;i<n;i++){
        cin >> a;
        v.push_back(a);
    }
    while(k--){
        for(i=0;i<v.size();i++){
            if(v[i]>v[i+1] || i==v.size()-1){
                v.erase(v.begin()+i);
                break;
            } 
        }
    }
    for(i=0;i<v.size();i++) cout << v[i] << " ";
    return 0;
}