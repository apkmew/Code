/*
    TASK: Imprison
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[5050][5050],b[20][5],c[20];
int main()
{
    int p,n,m,i,j,k,ans,now,x;
    scanf("%d %d %d",&n,&m,&p);
    for(i=1;i<=p;i++){
        scanf("%d %d",&b[i][0],&b[i][1]);
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            ans = 1e9;
            for(k=1;k<=p;k++){
                now = abs(b[k][0]-i)+abs(b[k][1]-j);
                if(now<ans){
                    ans = now;
                    x = k;
                }
            }
            c[x]++;
        }
    }
    for(i=1;i<=p;i++) printf("%d\n",c[i]);
    return 0;
}
