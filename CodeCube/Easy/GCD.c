#include<stdio.h>
int gcd(int a,int b)
    {
        if(a%b==0)  return b;
        return gcd(b,a%b);
    }
int main()
{
    int i,n,ans,now,a,b;
    scanf("%d %d",&a,&b);
        ans = gcd(a,b);

    printf("%d\n",ans);
    return 0;
}
