#include <stdio.h>
#include <string.h>
#include <math.h>
char num[10];
int main(){
    int q = 5,len,i,sum,n;
    while(q--){
        sum = 0;
        scanf(" %s",num);
        len = strlen(num); 
        for(i=0;i<len;i++){
            sum += pow(num[i]-'0',i+1);
        }
        sscanf(num,"%d",&n);
        if(sum == n) printf("Y");
        else printf("N");
    }
    return 0;
}