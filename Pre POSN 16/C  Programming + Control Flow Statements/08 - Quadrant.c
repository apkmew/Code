/*
 TASK: Quadrant
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
int main(){
    int x,a;
    scanf("%d",&x);
    a = x%360;
    if((a>0 && a<90) || (a<-270 && a>-360)) printf("1");
    if(a>90 && a<180 || (a<-180 && a>-270)) printf("2");
    if(a>180 && a<270 || (a<-90 && a>-180)) printf("3");
    if(a>270 && a<360 || (a<0 && a>-90)) printf("4");
    if(a==0 || a==180 || a==-180)  printf("x-axis");
    if(a==90 || a==270 || a==-90 || a==-270) printf("y-axis");

	return 0;
}
