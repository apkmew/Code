/*
    TASK: Pair
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int a,b;
    bool operator<(const A& o)const{
        return b<o.b;
    }
};
A x[100100];
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d %d",&x[i].a,&x[i].b);
    sort(x,x+n);

    return 0;
}
