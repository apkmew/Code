#include<stdio.h>
int main(){
    int max,min,n,i,now;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&now);
        if(i == 0){
            max = now;
            min = now;
        }
        if(now > max)
            max = now;
        if(now < min)
            min = now;
    }
    printf("%d\n",max);
    printf("%d\n",min);
    return 0;
}
