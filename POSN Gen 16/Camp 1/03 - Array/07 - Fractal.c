/*
    TASK: Fractal
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
#include<string.h>
char a[2100][1100];
int main(){
    int n,i,j,k,si,sj;
    scanf("%d",&n);
    memset(a,'-',sizeof a);
    a[1][1] ='*';
    for(i=2;i<=n;i++){
        for(j=1;j<=1<<i-1;j++){
            a[1<<i-1][j]='*';
        }
        si =(1<<i-1)+1;
        sj =(1<<i-2)+1;
        for(k=0;k<(1<<i-1);k++){
            for(j=0;j<(1<<i-2);j++){
                a[si+k][sj+j] = a[1+k][j+1];
            }
        }
    }
    for(i=1;i<=(1<<n)-1;i++){
        for(j=1;j<=1<<n-1;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
 return 0;
}
