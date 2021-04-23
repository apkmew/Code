#include <bits/stdc++.h>
using namespace std;
int main(){
    long double a,b,c,x;
    scanf("%Le %Le %Le",&a,&b,&c);
    x = a + b;
    if(x==c) printf("Correct\n");
    else     printf("Wrong\n");
    printf("%Le\n%Le",x,c);
    return 0;
}
