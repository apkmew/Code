/*
    Task	: 05_AmazonOrder
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 23 June 2021 [01:46]
    Algo	: 
    Status	: 
*/
#include<bits/stdc++.h>
using namespace std;
char a[1010];
double charge[20][40],promo[20][40];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int len,i,j,mm,dd,yy,order = 48,cou;
    double ch,pr,mx=-1;
    while(order--){
        gets(a);
        sscanf(a,"%d",&mm);
        sscanf(a+3,"%d",&dd);
        sscanf(a+6,"%d",&yy);
        len = strlen(a);
        for(i=0;i<len;i++){
            if(a[i]==',') cou++;
            if(cou==18) break;
        }
        sscanf(a+i,"%lf",&pr);
        i++;
        for(;i<len;i++){
            if(a[i]==',') cou++;
            if(cou==20) break;
        }
        sscanf(a+i,"%lf",&ch);
        charge[mm][dd] += ch;
        promo[mm][dd] += pr;
    }
    for(i=4;i<=7;i++){
        for(j=1;j<=31;j++){
            if(!charge[i][j]) continue;
            cout << i << "/" << j << "/" << "19 : $" << charge[i][j] << "\n"; 
            if(promo[i][j] > mx){
                mx = promo[i][j];
                mm = i; dd = j;
            }
        }
    }
    cout << "Most Promotion\n";
    cout << mm << "/" << dd << "/" << "19 : $" << mx;
    return 0;
}