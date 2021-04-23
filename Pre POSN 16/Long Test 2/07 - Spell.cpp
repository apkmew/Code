/*
 TASK: Spell
 LANG: C++
 AUTHOR: Mew
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,ans1,ans2;
    scanf("%d %d %d",&a,&b,&c);
    ans1 = __gcd(a,b);
    //ans2 = __gcd(ans1,c);
    //printf("%d\n",ans2);
    if(c%ans1==0) printf("Yes\n");
    else        printf("No\n");

	return 0;
}
