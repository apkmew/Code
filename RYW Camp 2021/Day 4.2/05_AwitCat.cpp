/*
    TASK : Awit Cat
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
    LANG : C++
*/
#include <bits/stdc++.h>
using namespace std;
char a[510],b[510];
int main(){
    int q,lena,lenb,i,j,ch;
    gets(b);
    sscanf(b,"%d",&q);
    while (q--)
    {
        ch = 0;
        gets(b);
        lenb = strlen(b);
        lena = 0;
        for(i=0;i<lenb;){
            sscanf(b+i," %s",a);
            //printf("%s ",a);
            lena = strlen(a);
            if(lena%4==0){
                //printf("ch");
                ch = 1;
                for(j=0;j<lena;j+=4){
                    if(a[j]!='m' || a[j+1]!='e' || a[j+2]!='o' || a[j+3]!='w') ch = 0;
                }
            }
            if(ch) break;
            i += lena;
        }
        if(ch) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
/*
3
iku iku iku iku meowmeow
meowwwwwwwwwww itte itte itte
mameow meow shinu shinu shinu
*/
