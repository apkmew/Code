#include<stdio.h>
int main(){
    double l,w,a,t;
    printf("length(m.):");  scanf(" %lf",&l);   l *= 3.28084;
    printf("width(m.):");   scanf(" %lf",&w);   w *= 3.28084;
    a = l * w;
    t = a / 2;
    printf("Use %.5lf seconds.",t);
    return 0;
}