/*
 TASK: Enigma
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
int main(){
    int n,i,j,k=1,l;
    scanf("%d",&n);
    for(i=n;i>1;i--){
        for(j=i;j>1;j--)
            printf("+");
        for(j=0;j<k;j++)
            printf("0");
        for(j=i;j>1;j--)
            printf("+");
        k+=2;
        printf("\n");
    }
    for(i=0;i<n*2-1;i++)
        printf("0");
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            if(i==n-1)  printf("");
            else        printf("+");
        }
        for(j=n*2-3;j>i*2;j--)
            printf("0");
        for(j=0;j<=i;j++){
            if(i==n-1)  printf("");
            else        printf("+");
        }
        printf("\n");
    }

	return 0;
}
