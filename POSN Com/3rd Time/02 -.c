#include<stdio.h>

int a[1010];

int main(){
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        if(a[i] == 0){
            printf("Have");
            return 0;
        }
    }
    printf("Don't have");
    return 0;
}
