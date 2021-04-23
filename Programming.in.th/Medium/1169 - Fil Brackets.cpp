#include <bits/stdc++.h>
using namespace std;
char  a[300];
int main(){
    int i,b=0,c=0,len;
    scanf(" %s",a);
    len = strlen(a);
    for(i=0;i<len;i++){
        if(a[i]=='(') b++;
        if(a[i]==')') b--;
        if(b<0) b=0,c++;
    }
    if(b>0) c+=b;
    printf("%d",c);
    return 0;
}
