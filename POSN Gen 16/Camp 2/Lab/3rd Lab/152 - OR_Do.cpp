/*
    TASK: OR_Do
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int qs[32][100100],a[100100];
int main()
{
    int n,q,i,j,l,r,sum;
    scanf("%d %d",&n,&q);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
        for(j=0;j<32;j++){
            qs[j][i] = qs[j][i-1];
            if(a[i] & (1<<j)) qs[j][i]++;
        }
    }
    while(q--){
        scanf("%d %d",&l,&r);
        for(i=0,sum=0;i<32;i++){
            if(qs[i][r] > qs[i][l-1]) sum += (1<<i);
        }
        printf("%d\n",sum);
    }
    return 0;
}
