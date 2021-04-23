#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,t,i;
    char s,r;
    i = 1;
    scanf("%d %d",&n,&m);
    while(m--){
        scanf(" %c %c %d",&r,&s,&t);
        t %= n;
        if(r=='Q'){
            if(s=='A'){
//                if(i+t<=n) printf("%d\n",i+t);
//                if(i+t>n) printf("%d\n",(i+t)%n);
                printf("%d\n",i+t);
            }
            if(s=='B'){
                if(i-t>0) printf("%d\n",i-t);
                if(i-t<=0) printf("%d\n",n+(i-t));
            }
        }
        if(r=='M'){
            if(s=='A'){
//                if(i+t<=n) i+=t;
//                if(i+t>n) i = (i+t)%n;
                i += t;
            }
            if(s=='B'){
                if(i-t>0) i-=t;
                if(i-t<=0) i = n+(i-t);
            }
        }
    }
    return 0;
}
/*
3 6
M A 5
M B 1
M B 0
Q A 0
Q B 0
Q B 1
*/
