/*
 TASK: Intendfind
 LANG: C++
 AUTHOR: Mew
*/

#include <bits/stdc++.h>
using namespace std;
int a[100100],b[100100];
int main(){
    int i,j,n,q,ans;
    scanf("%d %d",&n,&q);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        ans = 0;
        scanf("%d",&b[i]);
        for(j=0;j<n;j++){
            if(b[i]<=a[j])
                ans++;
        }
        printf("%d\n",ans);
    }

	return 0;
}
