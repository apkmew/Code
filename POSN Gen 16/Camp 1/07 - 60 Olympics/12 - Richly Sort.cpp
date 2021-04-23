/*
    TASK: Richly Sort
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <bits/stdc++.h>
using namespace std;
struct A{
    int x,y;
    bool operator< (const A& o)const{
        if(x<o.x) return true;
        else if(x>o.x) return false;
        else if(y<o.y) return false;
        else return true;
    }
};
A a[100100];
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a[i].x,&a[i].y);
    }
    sort(a,a+n);
    for(i=0;i<n;i++){
        printf("%d %d\n",a[i].x,a[i].y);
    }
    return 0;
}
