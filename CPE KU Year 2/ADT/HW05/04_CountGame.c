#include <stdio.h>
struct A{
    int l,r,cou;
} a[1000100];
int main(){
    int i,n,k,num,ch,now=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i].cou);
        a[i].l = (i==0) ? n-1 : i-1;
        a[i].r = (i==n-1) ? 0 : i+1;
    }
    for(i=1;;i++){
        if(a[now].r==now) break;
        num = i, ch = 0;
        while(num){
            if(num%10 == k){
                ch = 1;
                break;
            }
            num /= 10;
        }
        if(ch || i%k==0){
            a[now].cou--;
            if(a[now].cou<0){
                a[a[now].l].r = a[now].r;
                a[a[now].r].l = a[now].l;
            }
        } 
        now = a[now].r;
    }
    printf("%d",now+1);
    return 0;
}