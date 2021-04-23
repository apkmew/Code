/*
    TASK: ABC Hidden
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char s[1000100];
int main()
{
    int len,i,q,b,c,ans;
    scanf("%d",&q);
    while(q--){
        ans = 0;
        b = 0;
        c = 0;
        scanf(" %s",s);
        len = strlen(s);
        for(i=0;i<len;i++){
            if(s[i]=='B') b++;
            if(s[i]=='C') c++;
        }
        for(i=0;i<len;i++){
            if(s[i]=='A') ans += b*c;
            if(s[i]=='B') b--;
            if(s[i]=='C') c--;
        }
        printf("%d\n",ans);
    }
    return 0;
}
/*
3
AABC
ABAABBCC
AB
*/
