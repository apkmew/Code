#include<stdio.h>
int main(){
    int d,m,y,ans=0;
    scanf("%d/%d/%d",&d,&m,&y);
    switch(m){
        case 12 : ans += 30;
        case 11 : ans += 31;
        case 10 : ans += 30;
        case 9 : ans += 31;
        case 8 : ans += 31;
        case 7 : ans += 30;
        case 6 : ans += 31;
        case 5 : ans += 30;
        case 4 : ans += 31;
        case 3 : ans += 28;
        case 2 : ans += 31;
    }
    if(m>2 && (y%4==0 && y%100!=0 || y%400==0)) ans += 1;
    ans += d;
    printf("%d",ans);
    return 0;
}