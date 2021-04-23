#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,mn=2e9,mx=-2e9,a;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&a);
        mx = max(mx,a);
        mn = min(mn,a);
    }
    printf("%d\n%d",mn,mx);
    return 0;
}
