#include<bits/stdc++.h>
using namespace std;
char a[100];
int main(){
    long long n;
    int k=0,i,cnt=0,mx=-10;
    scanf("%lld",&n);
    while(n>=1){
        if(n%2==0){
            a[k]='0';
            k++;
            n/=2;
        }
        else if(n%2==1){
            a[k]='1';
            k++;
            n/=2;
        }
    }
    int len = strlen(a);
    for(i=0;i<len;i++){
        if(a[i]=='0'){
            cnt++;
        }
        else if(a[i]=='1'){
            mx = max(mx,cnt);
            cnt=0;
        }
    }
    printf("%d",mx);
    return 0;
}
