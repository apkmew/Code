/*
    Task	: 09_mid59_mask
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 26 December 2022 [15:28]
    Algo	: 
    Status	: Incomplete
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int a,b,c,d,i,j,num,n,aa,bb,cc,dd;
    cin >> n;
    aa = -1;
    for(i=1;i<=n;i++){
        cin >> num;
        if(num > aa){
            aa = num;
            a = i;
        }
    }
    bb = -1;
    for(i=n+1;i<=2*n;i++){
        cin >> num;
        if(num > bb){
            bb = num;
            b = i;
        }
    }
    cc = -1;
    for(i=2*n+1;i<=3*n;i++){
        cin >> num;
        if(num > cc){
            cc = num;
            c = i;
        }
    }
    dd = -1;
    for(i=3*n+1;i<=4*n;i++){
        cin >> num;
        if(num > dd){
            dd = num;
            d = i;
        }
    }
    if(aa == max(max(aa,bb),max(cc,dd))) cout << a << " ";
    else if(bb == max(max(aa,bb),max(cc,dd))) cout << b << " ";
    else if(cc == max(max(aa,bb),max(cc,dd))) cout << c << " ";
    else if(dd == max(max(aa,bb),max(cc,dd))) cout << d << " ";
    if(aa == min(max(aa,bb),max(cc,dd))) cout << a << " ";
    else if(bb == min(max(aa,bb),max(cc,dd))) cout << b << " ";
    else if(cc == min(max(aa,bb),max(cc,dd))) cout << c << " ";
    else if(dd == min(max(aa,bb),max(cc,dd))) cout << d << " ";
    if(aa == min(aa,bb)) cout << a << " ";
    else if(bb == min(aa,bb)) cout << b << " ";
    if(cc == min(cc,dd)) cout << c << " ";
    else if(dd == min(cc,dd)) cout << d << " ";
    return 0;
}
/*
3
1
2
5
40
25
39
21
29
27
10
20
15
*/