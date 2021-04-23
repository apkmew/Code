/*
    TASK:
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <bits/stdc++.h>
using namespace std;
int a[1010];
int main()
{
    int i,q,n,p,ch;
    scanf("%d",&q);
    while(q--){
        p = 0;
        ch = 0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        for(i=0;i<n;i++){
            if(a[i]==a[i+1]){
                a[i] = 0;
                a[i+1] = 0;
                p++;
                i++;
            }
        }
        printf("%d\n",p);
        for(i=0;i<n;i++){
            if(a[i]!=0) printf("%d ",a[i]);
            if(a[i]==0) ch++;
        }
        if(ch==n) printf("Empty");
        printf("\n");
    }
    return 0;
}
/*
2
15
3 5 3 2 3 6 3 4 7 2 4 3 5 3 4
4
1 8 8 1
*/
