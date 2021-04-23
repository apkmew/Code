/*
 TASK: Hack
 LANG: C++
 AUTHOR: Mew
*/

#include <bits/stdc++.h>
using namespace std;
string a[10100];
char b[100100];
int main(){
    int i,n,q,k;
    scanf("%d %d &d",&n,&q,&k);
    for(i=0;i<=n;i++){
        scanf(" %s",b);
        a[i]=b;
    }
    sort(a+1,a+n+1);
    while(q--){
        scanf(" %s",b);
        i = lower_bound(a+1,a+n+1,b)-a;
        if(a[i]==b) printf("Accepted\n");
        else        printf("Rejected\n");
    }

	return 0;
}
