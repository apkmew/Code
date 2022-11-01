#include <stdio.h>
#include <string.h>
char a[1010];
int main(){
    int q,len,i,cou;
    scanf("%d",&q);
    while(q--){
        cou = 0;
        scanf(" %s",a);
        len = strlen(a);
        if(a[0]=='0'){
            printf("0\n");
            continue;
        }
        for(i=len-1;i>=0;i--){
            if(a[i]=='0') cou++;
            else break;
        }
        if(cou == 0){
            printf("0\n");
            continue;
        }
        while(cou--){
            printf("1");
        }
        printf("\n");
    }
    return 0;
}