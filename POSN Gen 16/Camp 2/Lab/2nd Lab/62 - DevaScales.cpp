/*
    TASK: Deva Scales
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[25],b[25];
int main()
{
    memset(a,'0',sizeof a);
    memset(b,'0',sizeof b);
    int n,i,cnt=0,j,ans=0,x;
    scanf("%d",&n);
    for(i=0;i<21;i++){
        //printf("ch");
        if(n<=pow(3,i)) break;
    }
    i--;
    //printf("%d",i);
    while(n>0){
        //printf("ch");
        x = pow(3,i);
        //printf("%d %d %d\n",n,i,x);
        if(n>=x){ n-=x; a[i]++; continue; }
        i--;
    }
    i = 0;
    while(strcmp(a,b)){
        //printf("ch");
        if(a[i]!=b[i]){
            cnt++;
            if(a[i]-b[i]==2){
                a[i] = '0'; a[i+1]++;
                j = i+1;
                while(a[j]=='3'){
                    a[j] = '0'; a[j+1]++;
                    j++;
                }
            }
            else if(a[i]-b[i]==1){
                b[i]++;
            }
            else if(b[i]-a[i]==1){
                a[i]++;
            }
            else if(b[i]-a[i]==2){
                b[i] = '0'; b[i+1]++;
                j = i+1;
                while(b[j]=='3'){
                    b[j] = '0'; b[j+1]++;
                    j++;
                }
            }
        }
        i++;
    }
    //i--;
    while(i--){
        x = a[i] - '0';
        ans += pow(3,i)*x;
    }
    printf("%d %d",cnt,ans);
    return 0;
}
