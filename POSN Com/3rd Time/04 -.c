#include<stdio.h>

char a[10][10];

int main(){
    int i;
    for(i=0;i<3;i++)
        scanf(" %s",a[i]);
    for(i=2;i>=0;i--)
        printf("%s\n",a[i]);
    return 0;
}
