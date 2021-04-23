/*
    TASK: Influenza
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int a[100100],b[100100],c[100100];
int main()
{
    int i,n,mx=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    sort(a,a+n);
    sort(b,b+n,greater<int>());
    for(i=0;i<n;i++){
        c[i] = min(a[i],b[i]);
    }
    sort(c,c+n,greater<int>());
    printf("%d",c[0]);
    return 0;
}
/*
4
20
17
10
15
17
19
16
13
*/
