#include <bits/stdc++.h>
using namespace std;
char a[110];
int main(){
    int t,cnt=0,len,i,x;
    scanf("%d",&t);
    while(t--){
        cnt++;
        scanf(" %s",a);
        len = strlen(a);
        x = a[0]-'0';
        printf("Case #%d: ",cnt);
        for(i=0;i<x;i++) printf("(");
        printf("%c",a[0]);
        for(i=1;i<len;i++){
            if(a[i]-'0'>x){
                while(x<a[i]-'0'){
                    x++;
                    printf("(");
                }
            }
            else if(a[i]-'0'<x){
                while(x>a[i]-'0'){
                    x--;
                    printf(")");
                }
            }
            printf("%c",a[i]);
        }
        while(x>0){
            x--;
            printf(")");
        }
        printf("\n");

    }
    return 0;
}
