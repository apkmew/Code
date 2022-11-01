#include<bits/stdc++.h>
using namespace std;
char b[20],a[10][100];
int main(){
    int i,len,cou=0;
    scanf(" %s",b);
    len = strlen(b);
    for(i=0;i<4*len+1;i++){
        if(i%4==0){
            cou++;
            a[0][i] = a[1][i] = a[3][i] = a[4][i] = '.';
            if(cou%3==0 && cou-1!=len || cou%3==1 && cou!=1) a[2][i] = '*';
            else a[2][i] = '#';
        }
        if(i%4==1 || i%4==3){
            a[0][i] = a[2][i] = a[4][i] = '.';
            if(cou%3==0) a[1][i] = a[3][i] = '*';
            else a[1][i] = a[3][i] = '#';
        }
        if(i%4==2){
            a[1][i] = a[3][i] = '.';
            a[2][i] = b[cou-1];
            if(cou%3==0) a[0][i] = a[4][i] = '*';
            else a[0][i] = a[4][i] = '#';
        }
    }
    for(i=0;i<5;i++) printf("%s\n",a[i]);
    return 0;
}
