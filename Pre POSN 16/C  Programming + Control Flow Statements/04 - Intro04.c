/*
 TASK: Intro04
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
int main(){
    double a,b,c,d;
    scanf("%lf %lf %lf %lf.",&a,&b,&c,&d);
    printf("%.2lf",a/(c-b)*d);
	return 0;
}
