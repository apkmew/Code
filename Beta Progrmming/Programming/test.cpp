#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int a[] = {1,2,3,4,5};
    a = reverse(a,4);
    for(int i=0;i<5;i++) cout << a[i] << ' ';
    return 0;
}