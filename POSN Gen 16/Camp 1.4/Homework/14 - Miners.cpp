/*
    TASK: Miners
    AUTHOR: Mew
    SCHOOL: RYW
    LANG: CPP
*/
#include <bits/stdc++.h>
using namespace std;
char a[100100],b[100100];
int main()
{
    int i,n,coua,coub,pa,pb,nowa,nowb;
    char now;
    coua = coub = pa = pb = 0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf(" %c",&now);
        if(coua==0) nowa = 1;
        else if(coua == 1){
            if(now == a[0]) nowa = 1;
            else if(now != a[0]) nowa = 2;
        }
        else{
            if(now == a[coua-2] && now == a[coua-1]) nowa = 1;
            else if(now == a[coua-2] && now != a[coua-1]) nowa = 2;
            else if(now != a[coua-2] && now == a[coua-1]) nowa = 2;
            else if(now != a[coua-2] && a[coua-2] == a[coua-1]) nowa = 2;
            else if(now != a[coua-2] && now != a[coua-1] && a[coua-2] != a[coua-1]) nowa = 3;
        }
        if(coub==0) nowb = 1;
        else if(coub == 1){
            if(now == b[0]) nowb = 1;
            else if(now != b[0]) nowb = 2;
        }
        else{
            if(now == b[coub-2] && now == b[coub-1]) nowb = 1;
            else if(now == b[coub-2] && now != b[coub-1]) nowb = 2;
            else if(now != b[coub-2] && now == b[coub-1]) nowb = 2;
            else if(now != b[coub-2] && b[coub-2] == b[coub-1]) nowb = 2;
            else if(now != b[coub-2] && now != b[coub-1] && b[coub-2] != b[coub-1]) nowb = 3;
        }
        if(nowa > nowb){
            if(coub<2 && coua >= 2 && nowa < 3 && now != b[coub]){
                b[coub] = now;
                coub++;
                pb += nowb;
            }
            else{
                a[coua] = now;
                coua++;
                pa += nowa;
            }
        }
        else if(nowb > nowa){
            if(coua<2 && coub >= 2 && nowb < 3 && now != a[coua]){
                a[coua] = now;
                coua++;
                pa += nowa;
            }
            else{
                b[coub] = now;
                coub++;
                pb += nowb;
            }

        }
        else if(nowa == nowb){
            if(coub<2 && coua >= 2 && nowa < 3){
                b[coub] = now;
                coub++;
                pb += nowb;
            }
            else if(i==1 && nowa < 2){
                b[coub] = now;
                coub++;
                pb += nowb;
            }
            else{
                a[coua] = now;
                coua++;
                pa += nowa;
            }
        }
    }
//    printf("%s %d\n",a,pa);
//    printf("%s %d\n",b,pb);
    printf("%d",pa+pb);
    return 0;
}
