#include <stdio.h>
#include <string.h>
char a[10100],b[10100];
int c[10100];
int main(){
    int lena,lenb,i,j,k,tod=0;
    scanf(" %s",a);
    scanf(" %s",b);
    lena = strlen(a), lenb = strlen(b);
    for(i=lena-1,j=lenb-1,k=0;i>=0&&j>=0;i--,j--,k++){
        c[k] = (a[i] - '0') + (b[j] - '0') + tod;
        tod = c[k] / 10;
        c[k] %= 10;
    }
    for(;i>=0;i--,k++){
        c[k] = a[i] - '0' + tod;
        tod = c[k] / 10;
        c[k] %= 10;
    }
    for(;j>=0;j--,k++){
        c[k] = b[j] - '0' + tod;
        tod = c[k] / 10;
        c[k] %= 10;
    }
    c[k] = tod; k++;
    for(;k>=0&&c[k]==0;k--);
    for(;k>=0;k--) printf("%d",c[k]);
    return 0;
}
/*
94354657669743043298785692374893278427348962874678326498779483279234692369487837489267536
65084675429473847289473894578934758937458973489539887349857984375983745897348957983478947
*/