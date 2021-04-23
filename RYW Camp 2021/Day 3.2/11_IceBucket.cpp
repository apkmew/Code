/*
    TASK : Ice Bucket Challange
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
    LANG : C++
*/
#include <bits/stdc++.h>
using namespace  std;
int main(){
    int ans,q,a,b;
    scanf("%d",&q);
    while (q--)
    {
        ans=0;
        scanf("%d %d",&a,&b);
        while (a>100)
        {
            ans++;
            a -= 10;
            if(b*100>=a) break;
            else a-= (b-1)*100;
        }
        printf("%d\n",ans);
    }
    
    return 0;
}