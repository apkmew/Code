/*
    Task	: 06_robot1000s
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 26 December 2022 [14:31]
    Algo	: String
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
char a[110];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int k,len,i,n=0,s=0,w=0,e=0;
    cin >> a;
    cin >> k;
    len = strlen(a);
    for(i=0;i<len;i++){
        switch(a[i]){
            case 'N' : n++; break;
            case 'S' : s++; break;
            case 'W' : w++; break;
            case 'E' : e++; break;
        }
    }
    if(n>s){
        while(s>0 && k>0){
            s--; k--;
        }
    }
    else if(s>n){
        while(n>0 && k>0){
            n--; k--;
        }
    }
    if(e>w){
        while(w>0 && k>0){
            w--; k--;
        } 
    }
    else if(w>e){
        while(e>0 && k>0){
            e--; k--;
        }
    }
    while(k>0){
        if(n>0 && k>0) n--,k--;
        if(s>0 && k>0) s--,k--;
        if(e>0 && k>0) e--,k--;
        if(w>0 && k>0) w--,k--;
    }
    k = abs(n-s)+abs(e-w);
    cout << 2*k;
    return 0;
}