/*
 TASK: Exercise 1
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
#include<math.h>
int main(){
    int w,l;
    double r;
    int ra,rp;
    double cp,ca,cv;
    scanf("%d %d %lf",&w,&l,&r);
    ra = w*l;
    rp = w+w+l+l;
    cp = M_PI*2*r;
    ca = M_PI*r*r;
    cv = M_PI*4/3*r*r*r;
    printf("Rectangle Area is %d\n",ra);
    printf("Rectangle Perimeter is %d\n",rp);
    printf("Circle Perimeter is %.2lf\n",cp);
    printf("Circle Area is %.2lf\n",ca);
    printf("Circle Volume is %.2lf\n",cv);
    printf("\"I\'m %% \\\.\"");

	return 0;
}
