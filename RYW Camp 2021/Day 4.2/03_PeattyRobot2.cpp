/*
    TASK : Peatty Robot Gen 2
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
    LANG : C++
*/
#include <bits/stdc++.h>
using namespace  std;
char a[110];
int main(){
    int i,len,now,old=1,n;
    scanf(" %s",a);
    len = strlen(a);
    for(i=0;i<len;i++){
        if(a[i]=='N') now = 1;
        if(a[i]=='E') now = 2;
        if(a[i]=='S') now = 3;
        if(a[i]=='W') now = 4;
        if(a[i]=='Z'){
            printf("Z"); old = 1; continue;
        }
        n = now - old;
        if(n<0) n = 4 + n;
        while (n--)
        {
            printf("R");
        }
        printf("F");
        old = now;
    }
    return 0;
}