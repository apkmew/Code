/*
    TASK : Naruto Battle
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
char a[100100],na[100100],sa[100100];
int cou[30];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,j,n,k,cn=0,cs=0;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a[i];
        cou[a[i]-'a']++;
    }
    k = n/2;
    for(i=0;cou[i]==0;i++);
    while(k--){
        while(a[n-1]==0) n--;
        na[cn++] = a[n-1];
        cou[a[n-1]]--;
        n--;
        for(;cou[i]==0;i++);
        for(j=n-1;j>=0;j--){
            if(a[j]==i+'a'){
                sa[cs++] = a[j];
                a[j] = 0;
                cou[i]--;
            }
        }
    }
    if(strcmp(na,sa)<0) cout << "NO\n";
    else cout << "YES\n";
    for(i=0;i<cs;i++) cout << sa[i];
    return 0;
}
/*
2
ne
4
kava
8
cokolada
*/