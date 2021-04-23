/*
    TASK : Peatty Robot Gen 3
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
char a[110];
int main(){
    int k,len,i,n=0,s=0,w=0,e=0;
    scanf(" %s",a);
    scanf("%d",&k);
    len = strlen(a);
    for(i=0;i<len;i++){
        switch(a[i]){
            case 'N' : n++; break;
            case 'S' : s++; break;
            case 'W' : w++; break;
            case 'E' : e++; break;
        }
    }
    if(n>s){
        while(s>0 && k>0){
            s--; k--;
        }
    }
    else if(s>n){
        while(n>0 && k>0){
            n--; k--;
        }
    }
    if(e>w){
        while(w>0 && k>0){
            w--; k--;
        } 
    }
    else if(w>e){
        while(e>0 && k>0){
            e--; k--;
        }
    }
    while(k>0){
        if(n>0 && k>0) n--,k--;
        if(s>0 && k>0) s--,k--;
        if(e>0 && k>0) e--,k--;
        if(w>0 && k>0) w--,k--;
    }
    k = abs(n-s)+abs(e-w);
    printf("%d",2*k);
    return 0;
}
/*
NNEESW
2
NE
2
NWSSSSE
1
*/