/*
    TASK : Pythagorus
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
    LANG : C++
*/
#include <bits/stdc++.h>
using namespace  std;
int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a==0) printf("%.2lf",sqrt(c*c-b*b));
    else if(b==0) printf("%.2lf",sqrt(c*c-a*a));
    else printf("%.2lf",sqrt(a*a+b*b));
    return 0;
}