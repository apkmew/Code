/*
    TASK : Impose Minnum
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
struct A{
    string num;
    bool operator<(const A& o)const{
        if(num+o.num<o.num+num) return true;
        return false;
    }
};
A a[100100];
int main(){
    int n,i;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a[i].num;
    }
    sort(a,a+n);
    for(i=0;i<n;i++) cout << a[i].num;
    return 0;
}