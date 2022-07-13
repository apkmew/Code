#include <stdio.h>
#include <string.h>
char s[100100],a[30100][55],w[55];
int main(){
    int i,len,cou=0;
    scanf("%[^\n]s",s);
    len = strlen(s);
    sscanf(s," %s",w);
    strcpy(a[cou++],w);
    for(i=0;i<len;i++){
        if(s[i] == ' '){
            sscanf(s+i," %s",w);
            strcpy(a[cou++],w);
        }
    }
    for(i=cou-1;i>=0;i--){
        printf("%s ",a[i]);
    }
    return 0;
}
/*
birds and bees
believe it or not
*/