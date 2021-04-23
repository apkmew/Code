#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,h,a,ma=0;
    scanf("%d %d",&n,&h);
    while(n--){
        scanf("%d",&a);
        if(a<=h){
            ma = max(ma,a);
        }
    }
    printf("%d",ma);
    return 0;
}
