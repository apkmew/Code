/*
    Task	: 01_Chains
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 19 December 2022 [12:46]
    Algo	: linked list
    Status	: Incomplete
*/
#include<bits/stdc++.h>
using namespace std;
pair<int,int> a[100100];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int l,n,i,j,num,cou=1,idx=1;
    char opr;
    cin >> l >> n;
    for(i=0;i<l;i++){
        cin >> num;
        a[cou].first = -1;
        a[cou].second = cou+1;
        for(j=1;j<num-1;j++){
            a[cou+j].first = cou+j-1;
            a[cou+j].second = cou+j+1;
        }
        a[cou+num-1].first = cou+num-2;
        a[cou+num-1].second = -1;
        cou += num;
    }
    while(n--){
        cin >> opr;
        if(opr == 'B' && a[idx].first != -1){
            idx = a[idx].first;
        }
        else if(opr == 'F' && a[idx].second != -1){
            idx = a[idx].second;
        }
        else if(opr == 'C'){
            cin >> num;
            int numm = num;
            if(a[idx].second != -1){
                a[a[idx].second].first = -1;
                a[idx].second = -1;
            }
            if(a[num].second == -1 && a[num].first != -1){
                while(a[num].first != -1){
                    swap(a[num].first,a[num].second);
                    num = a[num].second;
                }
                swap(a[num].first,a[num].second);
            }
            a[numm].first = idx;
            a[idx].second = numm;
            idx = numm;
        }
        cout << idx << "\n";
    }
    return 0;
}
/*
4 10
3
4
2
5
B
F
C 9
C 4
F
B
F
C 3
F
C 14 
*/