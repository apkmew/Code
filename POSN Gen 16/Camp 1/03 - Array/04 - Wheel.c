/*
    TASK: Wheel
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
int ch[110],w[110],s[25];
int main()
{
    int n,k,roll,b,now=0,i,j;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&w[i]);
    for(i=0;i<n;i++){
        scanf("%d",&roll);
        for(j=0;j<roll;j++){
            while(ch[now%n])    now++;
            now++;
        }
        while(ch[now%n])    now++;
        ch[now%n]=1;
        s[i%k]+=w[now%n];
    }
    for(i=0;i<k;i++){
        printf("%d\n",s[i]);
    }
    return 0;
}
