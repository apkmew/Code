#include<bits/stdc++.h>
using namespace std;
int k[5];
char d[60];
int main(){
    k[0] = 1;
    k[1] = 0;
    k[2] = 0;
    scanf(" %s",d);
    int len = strlen(d);
    for(int i=0;i<len;i++){
        if(d[i] == 'A') swap(k[0],k[1]);
        if(d[i] == 'B') swap(k[1],k[2]);
        if(d[i] == 'C') swap(k[0],k[2]);
    }
    if(k[0] == 1)   printf("1");
    if(k[1] == 1)   printf("2");
    if(k[2] == 1)   printf("3");
    return 0;
}
