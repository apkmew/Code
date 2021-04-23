/*
    TASK: Peatty Robot 3
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char a[110];
int main()
{
    int k,n=0,s=0,w=0,e=0,len,ans,i;
    scanf(" %s",a);
    scanf("%d",&k);
    len = strlen(a);
    for(i=0;i<len;i++){
        if(a[i] == 'N') n++;
        else if(a[i] == 'S') s++;
        else if(a[i] == 'W') w++;
        else if(a[i] == 'E') e++;
    }
    if(len==k){
        printf("0");
        return 0;
    }
    if(n>=s && s>0){
        while(k>0){
            s--; k--;
            if(s==0) break;
        }
    }
    else if(n<s && n>0){
        while(k>0){
            n--; k--;
            if(n==0) break;
        }
    }
    if(e>w && w>0){
        while(k>0){
            w--; k--;
            if(w==0) break;
        }
    }
    else if(e<w && e>0){
        while(k>0){
            e--; k--;
            if(e==0) break;
        }
    }
    //printf("k = %d\n",k);
    while(k>0){
        if(n>0) n--,k--;
        else if(s>0) s--,k--;
        else if(w>0) w--,k--;
        else if(e>0) e--,k--;
    }
    //printf("%d %d %d %d %d\n",n,s,e,w,k);
    ans = abs(n-s)+abs(e-w);
    printf("%d\n",ans*2);
    return 0;
}
