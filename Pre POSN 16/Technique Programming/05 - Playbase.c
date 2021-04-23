/*
 TASK: Playbase
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
#include<string.h>
#include<ctype.h>
char a[100],b[100],c[100];
int main(){
    int x,aa=0,bb=0,cc,len,i,j=0;
    scanf("%d %s %s",&x,a,b);
    len = strlen(a);
    for(i=0;i<len;i++){
        aa*=x;
        if(isalpha(a[i]))   aa+=a[i]-'A'+10;
        else                aa+=a[i]-'0';
    }
    len = strlen(b);
    for(i=0;i<len;i++){
        bb*=x;
        if(isalpha(b[i]))   bb+=b[i]-'A'+10;
        else                bb+=b[i]-'0';
    }
    cc=aa+bb;
    printf("%d\n",cc);
    while(cc!=0){
        i = cc%x;
        if(i<10)    c[j++] = i+'0';
        else        c[j++] = i-10+'A';
        cc = cc/x;
    }
    for(j--;j>=0;j--)
        printf("%c",c[j]);
	return 0;
}
