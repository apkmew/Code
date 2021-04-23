/*
    TASK: Rank
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <bits/stdc++.h>
using namespace std;
int a[200100];
int main()
{
    int i,n,m,b,z;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
//    sort(a,a+n,greater<int>());
//    for(i=0;i<n;i++)
//        printf("%d ",a[i]);
    while(m--){
        scanf("%d",&b);
        z = upper_bound(a,a+n,b)-a;
        printf("%d\n",n-z+1);
    }
    return 0;
}
/*
5 4
75
84
90
94
99
99
77
85
95
*/
