#include<stdio.h>
int main(){
    int n,min = 2e9,max = -2e9,now,sum=0,nn;
    scanf("%d",&n);
    nn = n;
    while(nn--){
        scanf("%d",&now);
        if(now > max)   max = now;
        if(now < min)   min = now;
        sum += now;
    }
    printf("%d\n%d\n",min,max);
    printf("%d",sum/n);
    return 0;
}
