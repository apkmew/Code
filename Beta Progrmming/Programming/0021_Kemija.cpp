/*
    TASK : Kemija
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
char a[110];
vector<char> ans;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int len,i;
    gets(a);
    len = strlen(a);
    for(i=0;i<len;i++){
        if((a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') && a[i+1]=='p' && a[i]==a[i+2]){
            ans.push_back(a[i]);
            i+=2;
        }
        else ans.push_back(a[i]);
    }
    len = ans.size();
    for(i=0;i<len;i++) cout << ans[i];
    return 0;
}
/*
zepelepenapa papapripikapa
bapas jepe doposapadnapa opovapa kepemipijapa
*/