/*
 TASK:
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    n%=360;
    if(n>0 && n<90) printf("1");
    if(n>90 && n<180) printf("2");
    if(n>180 && n<270) printf("3");
    if(n>270 && n<360) printf("4");
    if(n==0 || n==180) printf("x-axis");
    if(n==90 || n==270) printf("y-axis");
    if(n<0 && n>-90) printf("4");
    if(n<-90 && n>-180) printf("3");
    if(n<-180 && n>-270) printf("2");
    if(n<-270 && n>-360) printf("1");
    if(n==-180) printf("x-axis");
    if(n==-90 || n==-270) printf("y-axis");

	return 0;
}
