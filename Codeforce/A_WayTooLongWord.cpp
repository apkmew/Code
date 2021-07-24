/*
    TASK : Way Too Long Word
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
char a[110];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,len;
    cin >> n;
    while(n--){
        cin >> a;
        len = strlen(a);
        if(len<=10){
            cout << a << "\n";
            continue;
        }
        cout << a[0] << len-2 << a[len-1] << "\n";
    }
    return 0;
}
/*
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis
*/