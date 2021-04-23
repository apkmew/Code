/*
    TASK : Frequency Sort
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
int n,c,a[1010];
struct A{
    int num,cou;
    bool operator<(const A& o)const{
        if(cou!=o.cou) return cou>o.cou;
        else{
            for(int i=0;i<n;i++){
                if(a[i]==num){ return num>o.num; break; }
                if(a[i]==o.num){ return o.num>num; break; }
            }
        } 
    }
};
A b[1010];
int main(){
    int i,j,cou,cnt=0; 
    scanf("%d %d",&n,&c);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    sort(a,a+n);
    cou = 1;
    for(i=1;i<n;i++){
        if(a[i]!=a[i-1]) b[cnt].num=a[i-1],b[cnt++].cou=cou,cou=1;
        else cou++;
    }
    b[cnt].num = a[n-1]; b[cnt++].cou = cou;
    sort(b,b+cnt);
    for(i=0;i<cnt;i++){
        for(j=0;j<b[i].cou;j++){
            printf("%d ",b[i].num);
        }
    }
    return 0;
}