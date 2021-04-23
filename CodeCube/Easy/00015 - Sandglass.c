#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    if(n%2 == 1){
        for(i=0;i<n;i+=2){
            for(j=1;j<i;j+=2)
                printf(" ");
            for(j=n;j>i;j--)
                printf("*");
            printf("\n");
        }
        for(i=0;i<n;i+=2){
            for(j=n;j>i+3;j-=2)
                printf(" ");
            for(j=-1;j<i+2;j++){
                if(n==i+1)
                    printf(" ");
                else
                    printf("*");
            }
            printf("\n");
        }
    }
    if(n%2 == 0)
        printf("error");
    return 0;
}
