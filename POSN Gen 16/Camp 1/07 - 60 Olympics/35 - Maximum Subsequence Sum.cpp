/*
    TASK: Maximum Subsequence Sum
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,i,a,ma=-1e9,x=1,y,st=1,sum=0;
    scanf("%d",&m);
    for(i=1;i<=m;i++){
        scanf("%d",&a);
        sum += a;
        if(sum>ma){
            ma = sum;
            y = i;
            x = st;
        }
        if(sum<0){
            sum = 0;
            st = i+1;
        }
    }
    printf("%d %d\n",x,y);
    printf("%d",ma);
    return 0;
}
