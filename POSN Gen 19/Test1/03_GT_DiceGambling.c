#include <stdio.h>
#include <string.h>
char a[110];
int main(){
    int q,len,i,j;
    scanf("%d",&q);
    while(q--){
        scanf(" %s",a);
        len = strlen(a);
        for(i=0;i<3;i++){
            for(j=0;j<len;j++){
                if(i==0){
                    switch(a[j]){
                        case '1' : printf("..."); break;
                        case '2' : printf(".*."); break;
                        case '3' : printf(".*."); break;
                        case '4' : printf("*.*"); break;
                        case '5' : printf("*.*"); break;
                        case '6' : printf("***"); break;
                    }
                }
                else if(i==1){
                    switch(a[j]){
                        case '1' : printf(".*."); break;
                        case '2' : printf("..."); break;
                        case '3' : printf(".*."); break;
                        case '4' : printf("..."); break;
                        case '5' : printf(".*."); break;
                        case '6' : printf("..."); break;
                    }
                }
                else if(i==2){
                    switch(a[j]){
                        case '1' : printf("..."); break;
                        case '2' : printf(".*."); break;
                        case '3' : printf(".*."); break;
                        case '4' : printf("*.*"); break;
                        case '5' : printf("*.*"); break;
                        case '6' : printf("***"); break;
                    }
                }
                if(j!=len-1) printf("|");
            }
            printf("\n");
        }
    }
    return 0;
}