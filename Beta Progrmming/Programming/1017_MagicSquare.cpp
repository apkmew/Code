/*
    Task	: 1017_MagicSquare
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 27 April 2022 [00:18]
    Algo	: 
    Status	: 
*/
#include<bits/stdc++.h>
using namespace std;
int row[15],col[15];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,j,n,num,dia1=0,dia2=0,ch=1,sum;
    cin >> n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin >> num;
            row[i] += num;
            col[j] += num;
            if(i == j) dia1 += num;
            if(i+j-1 == n) dia2 += num;
        }
    }
    sum = row[1];
    for(i=1;i<=n;i++){
        if(sum != row[i] || sum != col[i]){
            ch = 0; break;
        }
    }
    if(sum != dia1 || sum != dia2) ch = 0;
    if(ch == 1) cout << "Yes";
    else cout << "No";
    return 0;
}