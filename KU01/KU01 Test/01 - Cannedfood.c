#include <stdio.h>
int main(){
    int n,a,b,cnt=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&a,&b);
        if(a<=400 && b>=150 && b<=200)
            cnt++;
    }
    printf("%d",cnt);
    return 0;
}
