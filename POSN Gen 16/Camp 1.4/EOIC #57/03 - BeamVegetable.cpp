/*
    TASK: Beam Vegetable
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[10000100];
int main()
{
    int i,j,k,q,n,ans=0;
    a[1] = 1;
    a[2] = 1;
    for(i=3;i<10000000;i++)
        a[i] = 1;
    for(i=3;i<=sqrt(10000000);i+=2){
        if(a[i]){
            for(j=i*i;j<=10000000;j+=i){
                a[j] = 0;
            }
        }
    }
//    for(i=1;i<=100;i++)
//        if(a[i] && i%2!=0) printf("%d ",i);
    //printf("%d",a[1]);
    scanf("%d",&q);
    while(q--){
        ans = 0;
        scanf("%d",&n);
        while(n>0){
            if(a[n]==1 && n%2==1) n-=2;
            else if(n==2) n-=2;
            else if(a[n]==0) n-=1;
            else n-= 1;
            ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
