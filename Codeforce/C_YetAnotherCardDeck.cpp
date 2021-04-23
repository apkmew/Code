/*
    TASK : C. Yet Another Card Deck
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
int pos[60];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,num,n,q;
    cin >> n >> q;
    for(i=1;i<=n;i++){
        cin >> num;
        if(pos[num]==0) pos[num] = i;
    }
    while(q--){
        cin >> num;
        cout << pos[num] << " ";
        for(i=1;i<=50;i++){
            if(pos[i]<pos[num]) pos[i]++;
        }
        pos[num] = 1;
    }
    return 0;
}
/*
7 5
2 1 1 4 3 3 1
3 2 1 1 4
*/