/*
    TASK : Roman Con 2
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
    LANG : C++
*/
#include <bits/stdc++.h>
using namespace  std;
char a[100];
int main(){
    int q,i,len,ans;
    scanf("%d",&q);
    while (q--)
    {
        ans = 0;
        scanf(" %s",a);
        len = strlen(a);
        for(i=0;i<len;i++){
            if(a[i]=='M') ans += 1000;
            else if(a[i]=='C' && a[i+1]=='M') ans += 900,i++;
            else if(a[i]=='D') ans += 500;
            else if(a[i]=='C' && a[i+1]=='D') ans += 400,i++;
            else if(a[i]=='C') ans += 100;
            else if(a[i]=='X' && a[i+1]=='C') ans += 90,i++;
            else if(a[i]=='L') ans += 50;
            else if(a[i]=='X' && a[i+1]=='L') ans += 40,i++;
            else if(a[i]=='X') ans += 10;
            else if(a[i]=='I' && a[i+1]=='X') ans += 9,i++;
            else if(a[i]=='V') ans += 5;
            else if(a[i]=='I' && a[i+1]=='V') ans += 4,i++;
            else if(a[i]=='I') ans += 1;
        }
        printf("%d\n",ans);
    }
    
    return 0;
}
/*
3
DCCXXVI
XLIX
MMCDLXXXIX
*/