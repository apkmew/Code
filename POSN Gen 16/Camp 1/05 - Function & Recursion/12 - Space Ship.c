/*
    TASK: Space Ship
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <stdio.h>
int x[15],y[15],z[15],a[15],b[15],c[15],min=1e9,n,d,mark[15],p,q,r,dej;
void play(int d,int last,int sum){
    int i;
    //mark[d] = 1;
    sum += (x[d]-x[last])*(x[d]-x[last]) + (y[d]-y[last])*(y[d]-y[last]) + (z[d]-z[last])*(z[d]-z[last]);
    p+=a[d],q+=b[d],r+=c[d];
    if(p>=n && q>=n && r>=n){
        //printf("%d\n",sum);
        if(sum<min){
            min = sum;
        }
        return ;
    }
    for(i=1;i<=dej;i++){
        if(!mark[i]){
            mark[i]=1;
            play(i,d,sum);
            mark[i]=0;
            p-=a[i],q-=b[i],r-=c[i];
        }
    }
    //p-=a[d],q-=b[d],r-=c[d];

}
int main()
{
    int i,j;
    scanf("%d",&n);
    scanf("%d %d %d",&x[0],&y[0],&z[0]);
    scanf("%d",&dej);
    for(i=1;i<=dej;i++){
        scanf("%d %d %d",&x[i],&y[i],&z[i]);
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
    }
    //for(i=1;i<=dej;i++){
        play(0,0,0);
    //}
    printf("%d",min);
    return 0;
}
/*
1
0 0 0
2
10 0 0
2 5 7
0 10 0
0 3 9
*/
/*
5
0 0 0
5
60 34 56
0 5 7
90 41 92
1 7 8
24 61 81
6 8 8
41 86 70
5 6 7
46 97 85
9 2 4
*/
/*
2
0 0 0
5
10 0 0
1 1 1
0 10 0
0 1 0
0 0 10
0 0 1
0 20 0
1 0 0
1 0 0
0 1 0
*/
