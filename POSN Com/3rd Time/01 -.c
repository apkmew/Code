#include<stdio.h>

int a[1010];

int main(){
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=n-1;i>=0;i--)
        printf("%d\n",a[i]);
    return 0;
}
