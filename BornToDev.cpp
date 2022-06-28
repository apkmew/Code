#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mx = -2e9,num;
    char a;
    //scanf("[");
    while(0){
        scanf("%d%c",&num,&a);
        mx = max(mx,num);
        printf("%d ",num);
        printf("%c ",a);
        if(a==']') break;
    }
    printf("%d",mx);
    return 0;
}
