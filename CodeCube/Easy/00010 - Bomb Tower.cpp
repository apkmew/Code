#include<bits/stdc++.h>
using namespace std;
bool mark[500100];
int main(){
    int a,b,i,j,ans,run,cnt=0;
    scanf("%d %d",&a,&b);
    run = sqrt(500000);
    for(i=2;i<=run;i++){
        if(!mark[i]){
            for(j=i*i;j<=500000;j+=i)
                mark[j] = true;
        }
    }
    for(i=2;i<=a;i++){
        if(!mark[i])
            cnt++;
    }
    if(cnt > b) printf("%d\n",cnt-b);
    else        printf("0");
    return 0;
}
