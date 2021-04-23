/*
    TASK : Special Number
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
    LANG : C++
*/
#include <bits/stdc++.h>
using namespace  std;
char a[10];
int main(){
    int q=5,now,sum=0,n,i,len;
    while (q--)
    {
        sum = 0;
        scanf(" %s",a);
        sscanf(a,"%d",&n);
        len = strlen(a);
        for(i=0;i<len;i++){
            now = a[i] - '0';
            sum += pow(now,i+1);
        }
        if(sum==n) printf("Y");
        else printf("N");
    }
    
    
    return 0;
}
/*
89
98
518
815
1676
*/