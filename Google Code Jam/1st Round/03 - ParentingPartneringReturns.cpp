#include <bits/stdc++.h>
using namespace std;
struct A{
    int st,en,num;
    bool operator<(const A& o)const{
        if(st!=o.st) return st<o.st;
        return en<o.en;
    }
};
A a[1010];
A c,j;
char b[1010];
int main(){
    int i,t,cnt=0,n,ch;
    scanf("%d",&t);
    while(t--){
        c = j = {-1,-1,-1};
        cnt++;
        ch = 0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d %d",&a[i].st,&a[i].en);
            a[i].num = i;
        }
        sort(a,a+n);
        b[a[0].num] = 'C';
        c = a[0];
        for(i=1;i<n;i++){
            if(a[i].st>=c.en){
                c = a[i];
                b[c.num] = 'C';
            }
            else if(a[i].st>=j.en){
                j = a[i];
                b[j.num] = 'J';
            }
            else ch = 1;
        }
        printf("Case #%d: ",cnt);
        if(ch==1) printf("IMPOSSIBLE\n");
        else{
            for(i=0;i<n;i++) printf("%c",b[i]);
            printf("\n");
        }
    }
    return 0;
}
