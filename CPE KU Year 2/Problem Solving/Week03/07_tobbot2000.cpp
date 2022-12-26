/*
    Task	: 07_tobbot2000
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 26 December 2022 [14:39]
    Algo	: String
    Status	: Incomplete
*/
#include<bits/stdc++.h>
using namespace std;
char a[110];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int len,i,j,dir=0,newdir;
    cin >> a;
    len = strlen(a);
    for(i=0;i<len;i++){
        switch(a[i]){
            case 'N': newdir = 0; break;
            case 'E': newdir = 1; break;
            case 'S': newdir = 2; break;
            case 'W': newdir = 3; break;
            case 'Z': newdir = 0; break;
        }
        if(a[i] == 'Z'){
            cout << "Z"; 
            dir = newdir; 
            continue;
        }
        for(j=0;j<((newdir+4)-dir)%4;j++){
            cout << "R";
        }
        cout << "F";
        dir = newdir;
    }
    return 0;
}