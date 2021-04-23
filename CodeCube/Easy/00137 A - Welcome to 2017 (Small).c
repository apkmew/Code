#include<stdio.h>
int main(){
    int n,y,yans,ans,now;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&y);
        if(y > 2017)    now = y - 2017;
        else if(y <= 2017)  now = 2017 - y;
        if(now < ans){   ans = now; yans = y;}
        else if(now == ans && y < yans) yans = y;
        else if(now == ans && y == yans)    yans = -1;
    }
    printf("%d",yans);
    return 0;
}
