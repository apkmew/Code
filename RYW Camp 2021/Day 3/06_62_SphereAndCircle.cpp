/*
    TASK : 62_Sphere and Circle
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
    LANG : C++
*/
#include <bits/stdc++.h>
using namespace  std;
int main(){
    double r;
    scanf("%lf",&r);
    printf("%.3lf\n",acos(-1)*r*r*4);
    printf("%.3lf\n",acos(-1)*r*r*r*4/3);
    printf("%.3lf\n",acos(-1)*r*r);
    printf("%.3lf\n",acos(-1)*r*2);
    return 0;
}