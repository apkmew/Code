/*
    TASK : 61_Fortress
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
    LANG : C++
*/
#include <bits/stdc++.h>
using namespace  std;
int main(){
    int q=20,m,n,a,ans;
    while (q--)
    {
        scanf("%d %d",&m,&n);
        a = (m-2*n)/2;
        ans = (m - 4*a)/2 + 1;
        if(m<2*n || m<4*a) printf("0\n");
        else printf("%d\n",ans);
    }
    
    return 0;
}