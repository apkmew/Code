#include<stdio.h>
#include<string.h>

char a[10010];

int main(){
    int len,i;
    scanf(" %s",a);
    len = strlen(a);
    if(a[0] >= 97){
        for(i=0;i<len;i++){
            if(a[i] >= 97 && i == len-1){
                printf("All Small Letter");
                return 0;
            }
            if(a[i] >= 97)
                continue;
            else{
                printf("Mix");
                return 0;
            }
        }
    }
    else if(a[0] < 97){
        for(i=0;i<len;i++){
            if(a[i] < 97 && i == len-1){
                printf("All Capital Letter");
                return 0;
            }
            if(a[i] < 97)
                continue;
            else{
                printf("Mix");
                return 0;
            }
        }
    }
    return 0;
}
