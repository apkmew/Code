/*
    TASK: Ninja Power
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int tree[1<<23],n,m,i,a,b;
int main()
{
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&tree[i]);
    for(i=n-1;i>=0;i--){
        if(2*i+1 < n)
            tree[i] += tree[2*i+1];
        if(2*i+2 < n)
            tree[i] += tree[2*i+2];
    }
    printf("%d\n",tree[0]);
    scanf("%d",&m);
    while(m--){
        scanf("%d %d",&a,&b);
        if(tree[a]>tree[b]) printf("%d>%d\n",a,b);
        if(tree[a]<tree[b]) printf("%d<%d\n",a,b);
        if(tree[a]==tree[b]) printf("%d=%d\n",a,b);
    }
    return 0;
}
