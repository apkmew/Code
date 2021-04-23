/*
    TASK : 
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int q,k,n;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&k);
        if(k>=788888890){
            k -= 788888890;
            n = k/9;
            n += 1e8;
            k %= 9;
            if(k==0) printf("%d",n/1e8);
            else if(k==1) printf("%d",(n/1e7)%1e1);
            else if(k==2) printf("%d",(n/1e6)%1e2);
            else if(k==3) printf("%d",(n/1e5)%1e3);
            else if(k==4) printf("%d",(n/1e4)%1e4);
            else if(k==5) printf("%d",(n/1e3)%1e5);
            else if(k==6) printf("%d",(n/1e2)%1e6);
            else if(k==7) printf("%d",(n/1e1)%1e7);
            else if(k==8) printf("%d",(n/1e0)%1e8);
        }
        else if(k>=68888890){
            k -= 68888890;
            n = k/8;
            n += 1e7;
            k %= 8;
            if(k==0) printf("%d",n/1e7);
            else if(k==1) printf("%d",(n/1e6)%1e1);
            else if(k==2) printf("%d",(n/1e5)%1e2);
            else if(k==3) printf("%d",(n/1e4)%1e3);
            else if(k==4) printf("%d",(n/1e3)%1e4);
            else if(k==5) printf("%d",(n/1e2)%1e5);
            else if(k==6) printf("%d",(n/1e1)%1e6);
            else if(k==7) printf("%d",(n/1e0)%1e7);
        }
        else if(k>=5888890){
            k -= 5888890;
            n = k/7;
            n += 1e6;
            k %= 7;
            if(k==0) printf("%d",n/1e6);
            else if(k==1) printf("%d",(n/1e5)%1e1);
            else if(k==2) printf("%d",(n/1e4)%1e2);
            else if(k==3) printf("%d",(n/1e3)%1e3);
            else if(k==4) printf("%d",(n/1e2)%1e4);
            else if(k==5) printf("%d",(n/1e1)%1e5);
            else if(k==6) printf("%d",(n/1e0)%1e6);
        }
        else if(k>=488890){
            k -= 488890;
            n = k/6;
            n += 1e5;
            k %= 6;
            if(k==0) printf("%d",n/1e5);
            else if(k==1) printf("%d",(n/1e4)%1e1);
            else if(k==2) printf("%d",(n/1e3)%1e2);
            else if(k==3) printf("%d",(n/1e2)%1e3);
            else if(k==4) printf("%d",(n/1e1)%1e4);
            else if(k==5) printf("%d",(n/1e0)%1e5);
        }
        else if(k>=38890){
            k -= 38890;
            n = k/5;
            n += 1e4;
            k %= 5;
            if(k==0) printf("%d",n/1e4);
            else if(k==1) printf("%d",(n/1e3)%1e1);
            else if(k==2) printf("%d",(n/1e2)%1e2);
            else if(k==3) printf("%d",(n/1e1)%1e3);
            else if(k==4) printf("%d",(n/1e0)%1e4);
        }
        else if(k>=2890){
            k -= 2890;
            n = k/4;
            n += 1e5;
            k %= 4;
            if(k==0) printf("%d",n/1e3);
            else if(k==1) printf("%d",(n/1e2)%1e1);
            else if(k==2) printf("%d",(n/1e1)%1e2);
            else if(k==3) printf("%d",(n/1e0)%1e3);
        }
        else if(k>=190){
            k -= 190;
            n = k/3;
            n += 1e4;
            k %= 3;
            if(k==0) printf("%d",n/1e2);
            else if(k==1) printf("%d",(n/1e1)%1e1);
            else if(k==2) printf("%d",(n/1e0)%1e2);
        }
        else if(k>=10){
            k -= 10;
            n = k/2;
            n += 1e3;
            k %= 2;
            if(k==0) printf("%d",n/1e1);
            else if(k==1) printf("%d",(n/1e0)%1e1);
        }
        else printf("%d",k);
    }
    return 0;
}