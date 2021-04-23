/*
    TASK : Balance
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
    LANG : C++
*/
int a[30],b[30];
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,n,ans=0,cou=0;
    scanf("%d",&n);
    for(i=20;i>=0;i--){
        while (pow(3,i)<=n)
        {
            a[i]++;
            n -= pow(3,i);
        }    
    }
    for(i=0;i<=20;i++){
        if(a[i]==3) a[i] = 0,a[i+1]++;
        if(b[i]==3) b[i] = 0,b[i+1]++;
        if(a[i]==b[i]){
            ans += a[i] * pow(3,i);
            continue;
        } 
        cou++;
        if(abs(a[i]-b[i])==2){
            if(a[i]==2) a[i] = 0,a[i+1]++;
            if(b[i]==2) b[i] = 0,b[i+1]++;
        }
        else{
            if(a[i]>b[i]) b[i]++;
            else a[i]++;
        }
        ans += a[i] * pow(3,i);
    }
    printf("%d %d",cou,ans);
    return 0;
}