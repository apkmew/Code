#include <stdio.h>
#include <string.h>
char a[100100][100],b[100100][100];
char* sort(char *s){
    int i,j;
    for(i=1;s[i];i++){
        int j=i-1;
        char temp=s[i];
        while(j>=0 && s[j]>temp){
            s[j+1]=s[j];
            j--;
        }
        s[j+1]=temp;
    }
    return s;
}
int main(){
    int i,m,n;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
        scanf(" %s",a[i]);
        strcpy(b[i],a[i]);
        sort(b[i]);
    }
    for(i=0;i<n;i++){
        char s[100];
        scanf(" %s",s);
        sort(s);
        for(int j=0;j<m;j++){
            if(!strcmp(s,b[j])) printf("%s ",a[j]);
        }
        printf("\n");
    }
    return 0;
}
/*
8 3
final
fnali
fnial
fianl
title
ttile
tilte
equal
fanil
reply
title
*/