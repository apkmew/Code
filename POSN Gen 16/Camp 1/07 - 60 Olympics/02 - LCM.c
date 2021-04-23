/*
 TASK: LCM
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
long long gcd(long i,long j){
    if(i%j==0)    return j;
    return gcd(j,i%j);
}
int main(){
    long long n,i,now,a;
    scanf("%lld %lld",&n,&now);
    for(i=0;i<n-1;i++){
        scanf("%lld",&a);
        now = now*a/gcd(now,a);
    }
    printf("%lld",now);

	return 0;
}
