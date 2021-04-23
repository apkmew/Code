/*
 TASK: Easy
 LANG: CPP
 AUTHOR: Apimook T.
*/
#include <bits/stdc++.h>
using namespace std;
char a[100100],b[100100],c[100100];
int main(){
    int lena,lenb,x,y,z,tod=0;
    scanf(" %s",a);
    scanf(" %s",b);
    strrev(a);
    strrev(b);
    lena = strlen(a), lenb = strlen(b);
    while(lena<lenb) a[lena++] = '0';
    while(lena>lenb) b[lenb++] = '0';
    a[lena++] = '0'; b[lenb++] = '0';
    for(int i=0;i<lena;i++){
        x = a[i] - '0';
        y = b[i] - '0';
        z = x + y + tod;
        tod = z/10;
        z %= 10;
        c[i] = z + '0';
    }
    strrev(c);
    if(c[0]=='0') printf("%s",c+1);
    else printf("%s",c);
	return 0;
}
