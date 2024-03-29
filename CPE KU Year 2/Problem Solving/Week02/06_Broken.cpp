/*
    Task	: 06_Broken
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 22 December 2022 [21:10]
    Algo	: Linked List
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
list<char> l,b;
char a[100100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int ch=0,len,i;
    while(scanf(" %s",a) != EOF){
        len = strlen(a);
        for(i=0;i<len;i++){
            if(a[i] == '[' && !ch) ch = 1;
            else if(a[i] == ']' && ch){
                ch = 0;
                l.splice(l.begin(),b);
                b.clear();
            }
            else if(a[i] == '[' && ch){
                l.splice(l.begin(),b);
                b.clear();
            }
            else if(ch) b.push_back(a[i]);
            else if(!ch && a[i] != ']') l.push_back(a[i]);
        }
        if(!b.empty()) l.splice(l.begin(),b);
        for(auto x:l) cout << x;
        cout << "\n";
        l.clear();
    }
    return 0;
}
/*
This_is_a_[Beiju]_text
[[]][][]Happy_Birthday_to_Tsinghua_University
*/