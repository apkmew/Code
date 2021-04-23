/*
    TASK   : Castle
    AUTHOR : Mew
    SCHOOL : RYW
    LANG   : CPP
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,i,a;
    scanf("%lld",&n);
    for(i=0; ;i++){
        if(n<=(i+1)*(i+1)){
            if(i%2==0){
                if(n%2==0) printf("%lld",i*2-1);
                else printf("%lld",i*2);
            }
            else{
                if(n%2==0) printf("%lld",i*2);
                else printf("%lld",i*2-1);
            }
            return 0;
        }
    }
    return 0;
}
