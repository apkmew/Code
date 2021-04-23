/*
    TASK: Time_Arrange
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int s,f;
    bool operator<(const A& o)const{
        if(f!=o.f) return f<o.f;
        return s<o.s;
    }
};
A a[100100];
int main()
{
    int n,i,ans=0,last=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a[i].s,&a[i].f);
    }
    sort(a,a+n);
    for(i=0;i<n;i++){
        if(a[i].s<last)
            continue;
        ans++;
        last = a[i].f;
    }
    printf("%d",ans);
    return 0;
}
/*
7
0 2
3 6
7 10
0 4
5 7
8 10
6 8
3
1 100
2 3
3 4
*/
