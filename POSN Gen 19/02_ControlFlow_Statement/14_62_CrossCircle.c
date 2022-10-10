#include <stdio.h>
int main(){
    int q;
    double dis,h1,k1,r1,h2,k2,r2;
    scanf("%d",&q);
    while(q--){
        scanf("%lf %lf %lf %lf %lf %lf",&h1,&k1,&r1,&h2,&k2,&r2);
        dis = sqrt(pow(h1-h2,2)+pow(k1-k2,2));
        if(r2 > r1){
            double temp = r1;
            r1 = r2;
            r2 = temp;
        }
        if(h1==h2 && k1==k2 && r1==r2) printf("More\n");        // Same Circle
        else if(r1 > dis+r2) printf("None\n");                  // Ring
        else if(r1 == dis+r2) printf("One\n");                  // Ring Touch
        else if(r1 < dis+r2 && r1 > dis-r2) printf("More\n");   // Center 2 in Circle 1 and Cross 
        else if(r1 == dis-r2) printf("One\n");                  // Circle 1 Touch Circle 2
        else if(r1 < dis-r2) printf("None\n");                  // Circle 1 Not Touch Circle 2
    }
    return 0;
}