#include <bits/stdc++.h>
using namespace std;
char a[200];
int main(){
    int len,i;
    gets(a);
    len = strlen(a);
    for(i=0;i<len;i++){
        printf("%c",a[i]);
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u') i+=2;
    }
    return 0;
}
