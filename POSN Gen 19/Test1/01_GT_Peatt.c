#include <stdio.h>
int main(){
    int q,a,b,c,d,i,j,ans;
    scanf("%d",&q);
    while(q--){
        ans = i = j = 0;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(c > d){
            if(a%2 != b%2){
                if(b>a) b--;
                else a--;
                ans += c;
            }
            c = d;
        }
        else if(d > 2*c) d = 2*c;
        if(a<=b){
            ans += a*d;
            ans += (b-a)*c;
        }
        else if(a>b){
            ans += b*d;
            ans += (a-b)*c;
        }
        printf("%d\n",ans);
    }
    return 0;
}
/*
2
4 5 6 1
4 5 3 10
*/