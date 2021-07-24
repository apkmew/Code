/*
    TASK : Runner
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
int ch[10100],a[100100][5];
int main(){
    int i,n,m,num,lane,v;
    scanf("%d %d",&n,&m);
    while (n--)
    {
        scanf("%d %d %d",&num,&lane,&v);
        ch[lane]++;
        if(v>a[ch[lane]][1] || v==a[ch[lane]][1] && lane<a[ch[lane]][2]){
            a[ch[lane]][0] = num;
            a[ch[lane]][1] = v;
            a[ch[lane]][2] = lane;
        }
    }
    for(i=1;a[i][0]!=0;i++){
            printf("%d\n",a[i][0]);
    }
    return 0;
}
/*
6 3
1 1 10
2 2 5
3 2 10
4 3 10
5 1 7
6 2 7
*/