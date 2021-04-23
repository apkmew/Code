/*
    TASK : Roman Con
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
    LANG : C++
*/
#include <bits/stdc++.h>
using namespace  std;
int main(){
    int q,n;
    scanf("%d",&q);
    while (q--)
    {
        scanf("%d",&n);
        while (n>0)
        {
            if(n>=1000) n-=1000,printf("M");
            else if(n>=900) n-=900,printf("CM");
            else if(n>=500) n-=500,printf("D");
            else if(n>=400) n-=400,printf("CD");
            else if(n>=100) n-=100,printf("C");
            else if(n>=90) n-=90,printf("XC");
            else if(n>=50) n-=50,printf("L");
            else if(n>=40) n-=40,printf("XL");
            else if(n>=10) n-=10,printf("X");
            else if(n>=9) n-=9,printf("IX");
            else if(n>=5) n-=5,printf("V");
            else if(n>=4) n-=4,printf("IV");
            else if(n>=1) n-=1,printf("I");
        }
        printf("\n");
        
    }
    
    return 0;
}