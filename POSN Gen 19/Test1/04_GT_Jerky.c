#include <stdio.h>
long long fact(long long n){
    if(n==0) return 1;
    else return n*fact(n-1);
}
int main(){
    long long i,q,n,m,sum;
    scanf("%lld",&q);
    while(q--){
        sum = 0;
        scanf("%lld %lld",&n,&m);
        for(i=0;i<=n;i++){
            sum += fact(i);
            sum %= m;
        }
        printf("%lld\n",sum);
    }
    return 0;
}