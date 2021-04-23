/*
    TASK: Plane MH370
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
map<string,int> mp;
string a;
int main()
{
    int q,m,n;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&n,&m);
        while(m--){
            cin >> a;
            mp[a] = 1;
        }
        //sort(mp);
        for(int i=0;i<mp.size();i++) printf("%d ",i);
        if(mp.size()==n) printf("yes\n");
        else printf("no\n");
        mp.clear();
    }
    return 0;
}
/*
2
3 4
bangkok
phuket
pai
bangkok
3 1
phuket
*/
