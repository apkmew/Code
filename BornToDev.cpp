#include <bits/stdc++.h>
using namespace std;
int a[16] = {1,2,3,5,7,9,11,13,15,17,19,21,23,25,27,29};
int main()
{
    int n,x;
    scanf("%d",&n);
    x = lower_bound(a,a+16,n)-a;
    if(n==a[x]) printf("%d",x);
    else printf("-1");
    return 0;
}
