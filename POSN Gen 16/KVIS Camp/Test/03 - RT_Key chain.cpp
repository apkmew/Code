/*
    TASK: RT_Key chain
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
//int a[100100];
vector<vector<int>> a;
vector<int> c;
int b[100100];
int main()
{
    /*
    int cnt=0,i,j,n,k,ans=0;
    scanf("%d %d",&n,&k);
    j = 0;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;cnt<k;i++){
        i %= n;
        while(a[j]!=i+1){
            j++; ans++; j%=n;
        }
        cnt++;
    }
    printf("%d\n",ans);
    return 0;
    */
    int i,j,n,k,cnt,ans,now,d;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++){
        scanf("%d",&now);
        b[now] = i;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            d = b[j] - b[i];
            if(d<0) d+=n;
            c.push_back(d);
        }
        a.push_back(c);
        c.clear();
    }
    while(cnt<k){
        now = 1;
        ans += a[]
    }
    return 0;
}
/*
4 6
4
2
1
3
*/
