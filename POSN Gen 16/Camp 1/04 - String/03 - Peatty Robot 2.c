/*
    TASK: Peatty Robot 2
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
#include <string.h>
char a[110];
int main()
{
    int i;
    scanf(" %s",a);
    for(i=0;i<strlen(a);i++){
        if(a[i]=='N'){
            if(i==0 || a[i-1]=='N' || a[i-1]=='Z') printf("F");
            if(a[i-1]=='W') printf("RF");
            if(a[i-1]=='S') printf("RRF");
            if(a[i-1]=='E') printf("RRRF");
        }
        if(a[i]=='E'){
            if(i==0 || a[i-1]=='N' || a[i-1]=='Z') printf("RF");
            if(a[i-1]=='W') printf("RRF");
            if(a[i-1]=='S') printf("RRRF");
            if(a[i-1]=='E') printf("F");
        }
        if(a[i]=='S'){
            if(i==0 || a[i-1]=='N' || a[i-1]=='Z') printf("RRF");
            if(a[i-1]=='W') printf("RRRF");
            if(a[i-1]=='S') printf("F");
            if(a[i-1]=='E') printf("RF");
        }
        if(a[i]=='W'){
            if(i==0 || a[i-1]=='N' || a[i-1]=='Z') printf("RRRF");
            if(a[i-1]=='W') printf("F");
            if(a[i-1]=='S') printf("RF");
            if(a[i-1]=='E') printf("RRF");
        }
        if(a[i]=='Z') printf("Z");
    }
    return 0;
}
/*
NNEESWZEE
NENENENE
*/
