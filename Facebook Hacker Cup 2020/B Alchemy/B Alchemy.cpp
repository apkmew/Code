#include<bits/stdc++.h>
using namespace std;
char ans[110];
int main(){
    freopen("alchemy_input.txt","r",stdin);
    freopen("alchemy_output.txt","w",stdout);
    int cou=0,q,n,a,b,i;
    char c;
    scanf("%d",&q);
    while(q--){
        cou++;
        a = b = 0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf(" %c",&c);
            if(c=='A') a++;
            if(c=='B') b++;
        }
        if(abs(a-b)<=1) ans[cou] = 'Y';
        else ans[cou] = 'N';
    }
    for(i=1;i<=cou;i++){
        printf("Case #%d: %c\n",i,ans[i]);
    }
    return 0;
}
