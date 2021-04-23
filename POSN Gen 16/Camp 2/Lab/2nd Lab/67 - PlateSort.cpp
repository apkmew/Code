/*
    TASK: Plate Sort
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[300100];
int main()
{
    int q,n,i,x;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        x = n;
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        for(i=n-1;i>=0;i--){
            if(a[i]==x) x--;
        }
        printf("%d\n",x);
    }
    return 0;
}
