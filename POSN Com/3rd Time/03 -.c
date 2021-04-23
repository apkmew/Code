#include<stdio.h>

int a[1010];

int main(){
    int n,i,max,min;
    max = -2000000000;
    min = 2000000000;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }
    printf("%d\n%d",min,max);
    return 0;
}
