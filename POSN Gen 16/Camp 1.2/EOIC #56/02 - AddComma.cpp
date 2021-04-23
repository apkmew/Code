/*
    TASK: Add Comma
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[110];
int main()
{
    int i,q,len,ch;
    scanf("%d",&q);
    while(q--){
        scanf(" %s",a);
        len = strlen(a);
        if(len%3==0) ch = 3;
        if(len%3==1) ch = 2;
        if(len%3==2) ch = 1;
        for(i=0;i<len;i++){
            if(ch%3==0 && i!=0) printf(",");
            printf("%c",a[i]);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
/*
3
123456789
45120
9871
*/
