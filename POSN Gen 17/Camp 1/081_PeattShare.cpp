/*
    TASK : Peatt Share
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
int a[100100];
int main(){
    int q,n,i,j,ch,x;
    scanf("%d",&q);
    while(q--){
        ch = 0;
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            scanf("%d",&a[i]);
            a[i] += a[i-1];
        }
        for(i=1;i<=n;i++){
            if(a[i]*2==a[n]){
                ch = 1;
                printf("%d\n",i);
                break;
            }
            if(a[i]*2>a[n]){
                i--;
                break;
            }
        }
        for(i=1;i<=n && ch==0 ;i++){
            x = a[n]/2 + a[i];
            j = lower_bound(a,a+n,x)-a;
            if(a[j]==x){
                printf("%d %d\n",i,j);
                ch = 1;
                break;
            }
        }
        if(!ch) printf("NO\n");
    }
    return 0;
}
/*
3
8
3 1 2 1 1 2 1 1
8
2 1 3 1 5 4 1 5
8
10 20 3 40 5 7 15 2
*/