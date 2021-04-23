#include <stdio.h>
int main(){
    int n,m,k,sum=0,now,cnt=0;
    scanf("%d %d %d",&n,&m,&k);
    while(n--){
        scanf("%d",&now);
        sum += now;
        if(sum < m){
            printf("-1");
            return 0;
        }
        if(sum < k){
            sum = 0;
            cnt++;
        }
        if(sum >= k){
            sum -= k;
        }
    }
    printf("%d",cnt);
    return 0;
}
