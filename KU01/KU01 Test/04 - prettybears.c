#include <stdio.h>
int main(){
    int n,a,b,cnt=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&a,&b);
        if(a>=100 && a<=750 && b>=80 && b<=100){
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}
