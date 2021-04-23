/*
    TASK : Cross Circle
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
    LANG : C++
*/
#include <bits/stdc++.h>
using namespace  std;
int main(){
    int q;
    double d,h1,k1,h2,k2,r1,r2;
    scanf("%d",&q);
    while (q--)
    {
        scanf("%lf %lf %lf %lf %lf %lf",&h1,&k1,&r1,&h2,&k2,&r2);
        d = (h1-h2)*(h1-h2)+(k1-k2)*(k1-k2);
        d = sqrt(d);
        //r1 *= r1;
        //r2 *= r2;
        if(d<=r1 || d<=r2){
            if(r1>r2){
                if(d+r2>r1) printf("More\n");
                else if(d+r2<r1) printf("None\n");
                else printf("One\n");
            }
            else if(r1<r2){
                if(d+r1>r2) printf("More\n");
                else if(d+r1<r2) printf("None\n");
                else printf("One\n");
            }
            else printf("More\n");
        }
        else{
            if(d==r1+r2) printf("One\n");
            else if(d<r1+r2) printf("More\n");
            else printf("None\n");
        }
        //printf("%d %d %d",d,r1,r2);
    }
       
    return 0;
}