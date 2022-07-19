#include <stdio.h>
#include <string.h>
char a[100100],b[100100],idx[100100];
int main(){
    int m,p,n,i,j,ch,cou=0,cnt=0;
    scanf("%d %d %d",&m,&p,&n);
    scanf(" %s",a);
    scanf(" %s",b);
    for(i=0;i<=m-p;i++){
        ch = 0;
        for(j=0;j<p;j++){
            if(a[i+j] != b[j]) ch++;
            if(ch > n) break;
        }
        if(ch > n) continue;
        idx[cou++] = i;
        i += p - 1;
    }
    //printf("%d",cou);
    for(i=0;i<m;i++){
        if(i==idx[cnt]){
            cnt++;
            printf("[");
            for(j=0;j<p;j++){
                if(a[i+j] == b[j]) printf("%c",a[i+j]);
                else printf("?");
            }
            printf("]");
            i += p - 1;
        }
        else printf("%c",a[i]);
    }
    return 0;
}
/*
18 3 0
acabababababcbabab
aba
18 3 1
acabababababcbabab
aba
18 3 1
acabababababcabbab
abc
15 4 2
AAAGTGTGTCTGATT
GTAT
*/