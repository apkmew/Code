#include<stdio.h>
int main(){
    int i,j,n,k=1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("+");
        }
         for(j=2*n-3;j>i*2;j--){
            printf("-");
        }
        for(j=0;j<=i;j++){
            if(i == n-1 && j == 0)
                printf("");
            else
                printf("+");
        }
        printf("\n");
    }
    for(i=n-1;i>0;i--){
        for(j=i;j>0;j--){
            printf("+");
        }
        for(j=0;j<k;j++){
            printf("-");
        }
        if(i>0)
            k+=2;
        for(j=i;j>0;j--){
            printf("+");
        }
        printf("\n");
    }
    return 0;
}

