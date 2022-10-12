#include <stdio.h>
#include <string.h>
char a[1010];
int main(){
    int q,len,i,j,n,k;
    scanf("%d",&q);
    while(q--){
        scanf(" %s",a);
        scanf("%d %d",&n,&k);
        k %= n;
        len = strlen(a);
        for(i=0;i<len;i+=n){
            for(j=0;j<n;j++){
                printf("%c",a[i+((n-k+j)%n)]);
            }
        }
        printf("\n");
    }
    return 0;
}
/*
2
abcdefghi
3 1
abcdefghi
3 2
*/