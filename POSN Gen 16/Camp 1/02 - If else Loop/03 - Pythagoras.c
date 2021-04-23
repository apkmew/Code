/*
 TASK:
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
#include<math.h>
int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a==0)    printf("%.2lf",sqrt(c*c-b*b));
    if(b==0)    printf("%.2lf",sqrt(c*c-a*a));
    if(c==0)    printf("%.2lf",sqrt(b*b+a*a));

	return 0;
}
