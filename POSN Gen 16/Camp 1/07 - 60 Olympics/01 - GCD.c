/*
    TASK: GCD
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
int gcd(int a,int b){
    if(a%b==0)  return b;
    return gcd(b,a%b);
}
int main()
{
    int a,b,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(i==0) b = gcd(a,a);
        else b = gcd(a,b);
    }
    printf("%d",b);
    return 0;
}
