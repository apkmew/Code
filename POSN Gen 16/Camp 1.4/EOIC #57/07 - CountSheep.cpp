/*
    TASK: Count Sheep
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int mark[20];
int main()
{
    int i,t,l,s,m,p,r,q,n,num,now,sum,cou=0;
    scanf("%d",&q);
    while(q--){
        cou++;
        sum = 0;
        memset(mark,0,sizeof mark);
        scanf("%d",&now);
        if(now==0){
            printf("Case #%d: INSOMNIA\n",cou);
            continue;
        }
        for(i=1;i>0;i++){
            //printf("%d ",i);
            num = now;
            num *= i;
            //printf("%d ",num);
            l = num/1000000;
            s = (num/100000)%10;
            m = (num/10000)%10;
            p = (num/1000)%10;
            r = (num/100)%10;
            t = (num/10)%10;
            n = num%10;
            //printf("%d %d %d %d %d %d %d",l,s,m,p,r,t,n);
            if(!mark[l] && num>=1000000){sum++; mark[l]=1;}
            if(!mark[s] && num>=100000){sum++; mark[s]=1;}
            if(!mark[m] && num>=10000){sum++; mark[m]=1;}
            if(!mark[p] && num>=1000){sum++; mark[p]=1;}
            if(!mark[r] && num>=100){sum++; mark[r]=1;}
            if(!mark[t] && num>=10){sum++; mark[t]=1;}
            if(!mark[n]){sum++; mark[n]=1;}
            if(sum>=10) break;
        }
        printf("Case #%d: %d\n",cou,now*i);
    }
    return 0;
}
/*
5
0
1
2
11
1692
*/
