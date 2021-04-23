#include<bits/stdc++.h>
using namespace std;
char d[10];
int main(){
    int a,b,c;
    scanf("%d %d %d %s",&a,&b,&c,d+1);
    if(c<b) swap(b,c);
    if(c<a) swap(a,c);
    if(b<a) swap(a,b);
    for(int i=1;i<=3;i++){
        if(d[i] == 'A') printf("%d ",a);
        if(d[i] == 'B') printf("%d ",b);
        if(d[i] == 'C') printf("%d ",c);
    }
    return 0;
}
