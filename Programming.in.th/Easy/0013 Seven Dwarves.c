#include <stdio.h>
int a[10];
int main(){
    int i,j,sum=0;
    for(i=0;i<9;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            if(i!=j){
                if(sum-a[i]-a[j]==100){
                    a[i] = a[j] = 0;
                    goto next;
                }
            }
        }
    }
    next:;
    for(i=0;i<9;i++){
        if(a[i]!=0){
            printf("%d\n",a[i]);
        }
    }
    return 0;
}
