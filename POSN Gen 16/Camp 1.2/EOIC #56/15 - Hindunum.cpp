/*
    TASK: Hindunum
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[1000100][30],x[30];
int main()
{
    int n,nn,now,k,i,cou=-1,j,ans=0;
    scanf("%d",&n);
    nn = n;
    while(nn--){
        cou++;
        scanf("%d",&now);
        for(i=25;i>=0;i--){
            k = pow(2,i);
            if(now>=k){
                a[cou][i] = 1;
                now -= k;
            }
            if(now==0) break;
        }
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            for(k=0;k<=25;k++){
                if(a[i][k]!=a[j][k]) ans+=pow(2,k);
            }
        }
    }
    printf("%d",ans);
    return 0;
}
/*
3
3
5
7
*/
