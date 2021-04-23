#include <bits/stdc++.h>
using namespace std;
char a[1010],b[3000];
int main(){
    int i,len,n;
    scanf(" %s",a);
    len = strlen(a);
    for(i=0;i<len-1;i++){
        memset(b,'x',sizeof b);
        if(a[i]=='0') b[2*i+1]='.',b[2*i-1]='.';
        else if(a[i]=='1'){
            if(a[i-1]=='1' && b[2*(i-1)-1]=='.') b[2*i+1] = '.',b[2*i-1] = '-';
            else if(a[i-1]=='1' && b[2*(i-1)-1]=='-') b[2*i+1] = '-',b[2*i-1]='.';
            else if(a[i-1]=='2') b[2*i-1]='-',b[2*i+1]='.';
            else if(a[i+1]=='2') b[2*i-1]='.',b[2*i+1]='-';
        }
    }
    return 0;
}
