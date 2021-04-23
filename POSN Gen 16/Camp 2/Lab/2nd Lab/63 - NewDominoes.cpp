/*
    TASK: FC_Dominoes
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int x,h;
    bool operator<(const A& o)const{
        return x<o.x;
    }
};
A a[100100];
int main()
{
    int n,i,mxr=-1,mxl=-1,mx,ar,al,j;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d %d",&a[i].x,&a[i].h);
    sort(a,a+n);
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){

        }
    }
    return 0;
}
