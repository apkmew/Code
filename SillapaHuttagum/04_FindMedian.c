#include <stdio.h>
int a[100100];
int main(){
    int n,i,num,medidx,cou=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num);
        a[num]++;
    }
    medidx = n/2+1;
    for(i=0;i<=100000;i++){
        cou += a[i];
        if(cou >= medidx){
            printf("%d",i);
            break;
        }
    }
    return 0;
}