/*
    TASK: Matrixchain
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int row[15],col[15],dp[15][15],path[15][15];
int matrix(int l,int r){
    if(l==r) return 0;
    if(dp[l][r]) return dp[l][r];
    int minn = 1e9,now;
    for(int k=l;k<r;k++){
        now = matrix(l,k)+matrix(k+1,r)+(row[l]*col[k]*col[r]);
        if(now<minn){
            minn = now;
            path[l][r] = k;
        }
    }
    return dp[l][r] = minn;
}
void print(int l,int r){
    if(l==r){
        printf("A%d",l+1);
        return ;
    }
    printf("(");
    print(l,path[l][r]);
    printf(" x ");
    print(path[l][r]+1,r);
    printf(")");
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d %d",&row[i],&col[i]);
    printf("%d\n",matrix(0,n-1));
    print(0,n-1);
    return 0;
}
