/*
    TASK: Train
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
list<int> l;
list<int>::iterator it;
char a[20];
int main()
{
    int n,m;
    l.push_back(999);
    it = l.begin();
    scanf("%d",&n);
    while(n--){
        scanf(" %s",a);
        if(a[0]=='h')
            it = l.begin();
        if(a[0]=='n'){
            it++;
            if(it==l.end())
                it--;
        }
        if(a[0]=='t'){
            it = l.end();
            it--;
        }
        if(a[0]=='a'){
            scanf("%d",&m);
            it++;
            l.insert(it,m);
            it--; it--;
        }
        if(a[0]=='r'){
            it++;
            if(it != l.end())
                it = l.erase(it);
            it--;
        }
        if(a[0]=='c')
            printf("%d\n",*it);
        if(a[0]=='l'){
            for(;it!=l.end();it++)
                printf("%d ",*it);
            it--;
            printf("\n");
        }
    }
    return 0;
}
/*
14
call
add 5
add 6
list
head
next
add 7
tail
list
head
list
head
remove
list
*/
