#include<stdio.h>
int ans[10100];
int main(){
    int t,m,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&m,&n);
        if(m >= n){
            ans[i] = n/20 + 1;
        }
        if(n > m){
            ans[i] = m/20 + 1;
        }
    }
    for(int i=1;i<=t;i++)
        printf("Case #%d: %d\n",i,ans[i-1]);
    return 0;
}
/*
5
60 55
100 60
300 400
900 0
150 150
*/
