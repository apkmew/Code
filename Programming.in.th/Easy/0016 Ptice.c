#include <stdio.h>
char a[110],b[110],c[110];
//a=adrian b=bruno c=gorun
int main(){
    int i,n,x=0,y=0,z=0;
    char now;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%3==1)  a[i] = 'A';
        if(i%3==2)  a[i] = 'B';
        if(i%3==0)  a[i] = 'C';
        if(i%4==1)  b[i] = 'B';
        if(i%4==2)  b[i] = 'A';
        if(i%4==3)  b[i] = 'B';
        if(i%4==0)  b[i] = 'C';
        if(i%6==1 || i%6==2)  c[i] = 'C';
        if(i%6==3 || i%6==4)  c[i] = 'A';
        if(i%6==5 || i%6==0)  c[i] = 'B';
    }
    for(i=1;i<=n;i++){
        scanf(" %c",&now);
        if(now == a[i]) x++;
        if(now == b[i]) y++;
        if(now == c[i]) z++;
    }
    if(x>y && x>z)  printf("%d\nAdrian\n",x);
    else if(y>x && y>z)  printf("%d\nBruno\n",y);
    else if(z>x && z>y)  printf("%d\nGoran\n",z);
    else if(x==y && x==z)   printf("%d\nAdrian\nBruno\nGoran\n",x);
    else if(x==y)   printf("%d\nAdrian\nBruno\n",x);
    else if(x==z)   printf("%d\nAdrian\nGoran\n",x);
    else if(y==z)   printf("%d\nBruno\nGoran\n",y);
    //printf("%d %d %d",x,y,z);
    return 0;
}
/*
5
BAACC
*/
/*
9
AAAABBBBB
*/
