/*
 TASK:
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
#include<math.h>
int main(){
    int x1,x2,x3,y1,y2,y3,k;
    double a,b,c,s,ans1,ans2,c1,x;
    scanf("%d %d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3,&k);
    a = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    b = sqrt(pow((x1-x3),2)+pow((y1-y3),2));
    c = sqrt(pow((x2-x3),2)+pow((y2-y3),2));
    s = (a+b+c)/2;
    ans1 = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2lf\n",ans1);
    x = k*(a+b+c);
    c1 = M_PI*k*k;
    ans2 = c1 + x;
    printf("%.2lf",ans2);

	return 0;
}
