#include<bits/stdc++.h>
using namespace std;
char a[1010];
int main()
{
    int n,len;
    scanf("%d",&n);
    while(n--){
        scanf(" %s",a);
        len = strlen(a);
        //printf("%d ",len);
        if(len == 1 && a[0] == '2') printf("T\n");
        else if((a[len-1]-'0')%2==1) printf("T\n");
        else printf("F\n");
    }
    return 0;
}
