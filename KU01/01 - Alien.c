/*
LANG: C++
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int /*a,b,*/n,/*,r,x,y,d,*/ans=0;
    double a,b,x,y,d,r;
    scanf("%d %lf %lf %lf",&n,&a,&b,&r);
    while(n--){
        scanf("%lf %lf",&x,&y);
        d = sqrt(pow(x-a,2)+pow(y-b,2));
        if(d<=r) ans++;
    }
    printf("%d",ans);
    return 0;
}
