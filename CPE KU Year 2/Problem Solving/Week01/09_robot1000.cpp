#include <bits/stdc++.h>
using namespace std;
char a[110];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int x=0,y=0,len,i;
    cin >> a;
    len = strlen(a);
    for(i=0;i<len;i++){
        switch(a[i]){
            case 'N' : y++; break;
            case 'S' : y--; break;
            case 'E' : x++; break;
            case 'W' : x--; break;
            case 'Z' : x=0,y=0; break;
        }
    }
    cout << x << " " << y;
    return 0;
}