/*
 TASK: Pythagorus
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
    if(c==0)    printf("%.2lf",sqrt(a*a+b*b));

	return 0;
}
