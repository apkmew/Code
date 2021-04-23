/*
 TASK: Special Number
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
#include<math.h>
int a[10];
int main(){
    int i,j,sum,n,s,r,p;
    for(i=0;i<5;i++){
        sum=0;
        scanf("%d",&a[i]);
        p = a[i]/1000;
        r = (a[i]%1000)/100;
        s = (a[i]%100)/10;
        n = a[i]%10;
        if(a[i]>=1000){
            sum = pow(p,1)+pow(r,2)+pow(s,3)+pow(n,4);
        }
        else if(a[i]>=100){
            sum = pow(r,1)+pow(s,2)+pow(n,3);
        }
        else if(a[i]>=10){
            sum = pow(s,1)+pow(n,2);
        }
        else if(a[i]>=1){
            sum = pow(n,1);
        }
        if(a[i] == sum)
            printf("Y");
        else
            printf("N");
    }
    return 0;
}
