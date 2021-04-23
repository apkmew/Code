#include <bits/stdc++.h>
using namespace std;
char a[210];
int main(){
    int i,len;
    scanf(" %s",a);
    len = strlen(a);
    for(i=0;i<len/2;i++){
        if(isalpha(a[i]))
            a[i] = tolower(a[i]);
        if(isalpha(a[len-i-1]))
            a[len-i-1] = tolower(a[len-i-1]);
        if(a[i]!=a[len-i-1]){
            printf("No\n");
            return 0;
        }
    }
    if(len%2==0) printf("Palindrome\n");
    else printf("Double Palindrome\n");
    return 0;
}
