/*
    TASK: Electricity
    AUTHOR: Mew
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
#define PI pair<int,int>
#define X first
#define Y second
using namespace std;
int a[500500];
priority_queue<PI> h;
int main()
{
    int i,n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=1;i<n-1 && i<=k;i++) h.push(PI(-(a[0]+a[i]),i));
    for(i=k+1;i<n;i++){
        while(!h.empty() && i-h.top().Y>k) h.pop();
        int tmp = -h.top().X;
        if(i == n-1){
            printf("%d\n",tmp+a[i]);
            return 0;
        }
        h.push(PI(-(tmp+a[i]),i));
    }
    return 0;
}
