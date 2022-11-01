#include <stdio.h>
int main(){
    int hr1,mn1,hr2,mn2,hr,mn;
    printf("Time 1 ( Sleep Time ) : "); scanf("%d:%d",&hr1,&mn1);
    printf("Time 2 ( Wake Up Time ) : "); scanf("%d:%d",&hr2,&mn2);
    /*if(mn2 < mn1){
        mn2 += 60;
        hr2 -= 1;
    }
    if(hr2 < hr1) hr2 += 24;*/
    hr2 += 24;
    hr2 -= 1;
    mn2 += 60;
    mn = mn2 - mn1;
    hr2 += mn/60;
    hr = (hr2 - hr1)%24;
    mn %= 60;
    printf("Sleep Time : %02d hrs %02d mins",hr,mn);
    return 0;
}