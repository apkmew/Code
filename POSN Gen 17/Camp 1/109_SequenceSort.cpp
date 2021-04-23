/*
    TASK : Sequence Sort
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> a;
vector< vector <int> > b;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,j,n,m,num;
    cin >> n >> m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> num;
            a.push_back(num);
        }
        b.push_back(a);
        a.clear();
    }
    sort(b.begin(),b.end());
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
/*
5 3
7 10 6
1 3 5
1 2 7
1 3 4
3 10 6
*/