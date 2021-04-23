/*
 TASK:
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
int gcd(int i,int j){
    if(i==0)  return j;
    return gcd(j%i,i);
}
int main(){
    int n,a,now,k;
    scanf("%d",&n);
    for(k=0;k<n;k++){
        scanf("%d",&a);
        if(k==0) now=a;
        now = gcd(a,now);
        //printf("%d",now);
    }
    printf("%d",now);
	return 0;
}
