/*
    TASK: FC_AB Sequence
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long a[110],b[110],c[110];
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    c[0] = a[0];
    for(i=1;i<n;i++){
        b[i] = b[i-1] + c[i-1];
        c[i] = a[i] * (i+1) - b[i];
    }
    for(i=0;i<n;i++){
        printf("%lld ",c[i]);
    }
    return 0;
}
/*
5
1 2 2 3 4
*/
