/*
    TASK: SMS Thumb
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
#include <ctype.h>
char b[100];
char a[][3][4]={
                    {
                        {' ',' ',' '},
                        {'A','B','C'},
                        {'D','E','F'},
                    },
                    {
                        {'G','H','I'},
                        {'J','K','L'},
                        {'M','N','O'},
                    },
                    {
                        {'P','Q','R','S'},
                        {'T','U','V'},
                        {'W','X','Y','Z'},
                    }
                };
int main()
{
    int n,s,m,h,v,x,y,i,ch=0;
    scanf("%d",&n);
    scanf("%d %d",&s,&m);
    x=(s-1)/3;
    y=(s-1)%3;
    if((x==2 && y==0) || x==2 && y==2)  m = (m-1)%4;
        else    m = (m-1)%3;
    b[0] = a[x][y][m];
    n-=1;
    for(i=1;i<=n;i++){
        scanf("%d %d %d",&h,&v,&m);
        y+=h;
        x+=v;
        if((x==2 && y==0) || x==2 && y==2)  m = (m-1)%4;
        else    m = (m-1)%3;
        if(x==0 && y==0){
            m++;
            while(m--){
                while(1){
                    if(b[i-1]==' '){
                        i--;
                        n--;
                    }
                    else
                        break;
                }
                b[i-1]=' ';
                i--;
                n--;
                continue;
            }
        }
        else b[i]=a[x][y][m];
        //printf("%d\n",i);
    }
    for(i=0;i<=n;i++){
        if(isalpha(b[i])){
            printf("%c",b[i]);
            ch++;
        }
    }
    if(ch==0)   printf("null");
    return 0;
}
/*
4
5 3
1 0 3
-1 1 3
1 -2 2
*/
/*
2
9 6
-2 -2 5
*/
/*
5
3 3
0 0 2
-2 0 1
2 1 3
0 1 2
*/
