#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    d = __gcd(a,b);
    if(c%d==0) printf("Yes\n");
    if(c%d!=0) printf("No\n");
    return 0;
}
