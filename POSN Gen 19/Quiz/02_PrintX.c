#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n-1;i++){
        for(j=0;j<i;j++) printf("B");
        printf("*");
        for(j=2*(n-i)-3;j>0;j--) printf("A");
        printf("*");
        for(j=0;j<i;j++) printf("C");
        printf("\n");
    }
    for(i=0;i<n-1;i++) printf("B");
    printf("*");
    for(i=0;i<n-1;i++) printf("C");
    printf("\n");
    for(i=n-2;i>=0;i--){
        for(j=0;j<i;j++) printf("B");
        printf("*");
        for(j=2*(n-i)-3;j>0;j--) printf("D");
        printf("*");
        for(j=0;j<i;j++) printf("C");
        printf("\n");
    }
    return 0;
}