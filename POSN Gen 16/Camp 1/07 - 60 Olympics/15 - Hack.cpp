/*
    TASK: Hack
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <bits/stdc++.h>
using namespace std;
string a[100100];
char b[100100];
int main()
{
    int i,n,m,k;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&k);
    for(i=0;i<n;i++){
        scanf(" %s",b);
        a[i]=b;
    }
    sort(a,a+n);
    while(m--){
        scanf(" %s",b);
        i = lower_bound(a,a+n,b)-a;
        if(a[i]==b) printf("Accepted\n");
        else printf("Rejected\n");
    }
    return 0;
}
/*
5 3 4
PEAT
LOVE
PLAY
SUCK
KITE
KISS
KITE
SUCK
*/
