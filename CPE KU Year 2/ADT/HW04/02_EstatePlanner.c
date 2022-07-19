#include <stdio.h>
#include <math.h>
int a[20],b[20];
int main(){
    int i,n,m,x,y,nn,mm,mx,ch=0,ans=0;
    double l1,l2;
    scanf("%d %d",&n,&m);
    nn = n; mm = m;
    l1 = log(n)/log(2);
    l2 = log(m)/log(2);
    x = (int)l1;
    y = (int)l2;
    mx = (x > y) ? x : y;
    for(i=mx;i>=0;i--){
        if(nn >= pow(2,i)){
            a[i] = 1; nn -= pow(2,i);
        }
        if(mm >= pow(2,i)){
            b[i] = 1; mm -= pow(2,i);
        }
    }
    for(i=mx;i>=0;i--){
        if(a[i]==1 && b[i]==1 && ch==0){
            ch = 1; ans++;
        }
        else if((a[i]==1 || b[i]==1) && ch==0){
            ch = 1;
        }
        else if((a[i]==1 || b[i]==1) && ch==1){
            if(a[i]==1) ans += m/pow(2,i);
            if(b[i]==1) ans += n/pow(2,i);
            if(a[i]==b[i]) ans--;
        }
    }
    printf("%d",ans);
    return 0;
}
// O(log(n))