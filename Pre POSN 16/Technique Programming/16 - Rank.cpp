/*
 TASK:
 LANG: C++
 AUTHOR: Mew
*/

#include <bits/stdc++.h>
using namespace std;
int a[200100],b;
int main(){
    int n,m,i;
    scanf("%d %d",&n,&m);
    for(i=n;i>0;i--){
        scanf("%d",&a[i]);
    }
    while(m--){
        scanf("%d",&b);
        for(i=1;i<=n;i++){
            if(b>=a[i]){
                printf("%d\n",i);
                break;
            }
        }
    }
	return 0;
}
/*
5 4
75
84
90
94
99
100
77
85
95
*/
