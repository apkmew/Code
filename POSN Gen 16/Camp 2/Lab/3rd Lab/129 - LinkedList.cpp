/*
    TASK: Linked List
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int l[500100],r[500100];
int main()
{
    int i,n,k,a,b;
    char opr;
    scanf("%d %d",&n,&k);
    for(i=0;i<=n;i++){
        l[i] = i-1;
        r[i] = i+1;
    }
    while(k--){
        scanf(" %c %d %d",&opr,&a,&b);
        r[l[a]] = r[a];
        l[r[a]] = l[a];
        if(opr=='A'){
            l[a] = l[b];
            r[a] = b;
            r[l[b]] = a;
            l[b] = a;
        }
        if(opr=='B'){
            l[a] = b;
            r[a] = r[b];
            l[r[b]] = a;
            r[b] = a;
        }
    }
    int now = r[0];
    for(int i=1;i<=n;i++){
        printf("%d ",now);
        now = r[now];
    }
    return 0;
}
