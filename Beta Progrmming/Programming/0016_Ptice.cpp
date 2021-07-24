/*
    TASK : Ptice
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
int a[5];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,n,mx;
    char c;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> c;
        if(i%3==0 && c=='A') a[0]++;
        else if(i%3==1 && c=='B') a[0]++;
        else if(i%3==2 && c=='C') a[0]++;
        if((i%4==0 || i%4==2) && c=='B') a[1]++;
        else if(i%4==1 && c=='A') a[1]++;
        else if(i%4==3 && c=='C') a[1]++;
        if((i%6==0 || i%6==1) && c=='C') a[2]++;
        else if((i%6==2 || i%6==3) && c=='A') a[2]++;
        else if((i%6==4 || i%6==5) && c=='B') a[2]++; 
    }    
    mx = max(a[0],max(a[1],a[2]));
    //cout << a[0] << " " << a[1] << " " << a[2] << "\n";
    cout << mx << "\n";
    if(a[0]==mx) cout << "Adrian\n";
    if(a[1]==mx) cout << "Bruno\n";
    if(a[2]==mx) cout << "Goran\n";
    return 0;
}
/*
9
AAAABBBBB
6
BBAACC
*/