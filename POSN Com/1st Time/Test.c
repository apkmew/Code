#include<stdio.h>
#include<string.h>
char a[5];
int main(){
    printf("Enter Blood Type : ");
    scanf(" %s",a);
    int len = strlen(a);
    if(((a[0]=='A' && a[1]=='B') || (a[0]=='a' && a[1]=='b')) && len==2)  printf("Rational\nVersatile\nDiscriminating\n");
    else if(((a[0]=='A' && a[1]=='b') || (a[0]=='a' && a[1]=='B')) && len==2)  printf("Rational\nVersatile\nDiscriminating\n");
    else if((a[0]=='A' || a[0]=='a') && len==1)  printf("Serious\nEarnest\nTidy\nFastidious\n");
    else if((a[0]=='B' || a[0]=='b') && len==1)  printf("Optimistic\nCurious\nIrresponsible\n");
    else if((a[0]=='O' || a[0]=='o') && len==1)  printf("Rough\nWorkaholic\nRude\nSociable\n");
    else    printf("Not Blood Type\n");
    return 0;
}
