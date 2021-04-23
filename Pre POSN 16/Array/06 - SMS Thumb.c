/*
 TASK:
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
char a[4500];
int now=0;
void push(int s,int m){
    switch(s){
        case 1 : now-=m; if(now<0) now=0; break;

        case 2 : m%=3; if(m==0) a[now++]='C';
                       if(m==1) a[now++]='A';
                       if(m==2) a[now++]='B'; break;


        case 3 : m%=3; if(m==0) a[now++]='F';
                       if(m==1) a[now++]='D';
                       if(m==2) a[now++]='E'; break;


        case 4 : m%=3; if(m==0) a[now++]='I';
                       if(m==1) a[now++]='G';
                       if(m==2) a[now++]='H'; break;


        case 5 : m%=3; if(m==0) a[now++]='L';
                       if(m==1) a[now++]='J';
                       if(m==2) a[now++]='K'; break;


        case 6 : m%=3; if(m==0) a[now++]='O';
                       if(m==1) a[now++]='M';
                       if(m==2) a[now++]='N'; break;


        case 7 : m%=4; if(m==0) a[now++]='S';
                       if(m==1) a[now++]='P';
                       if(m==2) a[now++]='Q';
                       if(m==3) a[now++]='R'; break;


        case 8 : m%=3; if(m==0) a[now++]='V';
                       if(m==1) a[now++]='T';
                       if(m==2) a[now++]='U'; break;


        case 9 : m%=4; if(m==0) a[now++]='Z';
                       if(m==1) a[now++]='W';
                       if(m==2) a[now++]='X';
                       if(m==3) a[now++]='Y'; break;
    }
}
int main(){
    int n,s,m,i,j,h,v;
    scanf("%d %d %d",&n,&s,&m);
    push(s,m);
    i=(s-1)/3;
    j=(s-1)%3; n--;
    while(n--){
        scanf("%d %d %d",&h,&v,&m);
        i+=v, j+=h;
        s = i*3+j+1;
        push(s,m);
    }
    for(i=0;i<now;i++)
        printf("%c",a[i]);
    if(now==0)
        printf("null");
    printf("\n");
	return 0;
}
