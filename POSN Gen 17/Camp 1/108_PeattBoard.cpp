/*
    TASK : Peatt Board
    LANG : C++    
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
*/
#include <bits/stdc++.h>
using namespace std;
int a[1010][1010];
int main(){
    int w,h,n,i,j,x1,y1,x2,y2;
    cin >> w >> h >> n;
    while(n--){
        cin >> y1 >> x1 >> y2 >> x2;
        x2++; y2++;
        a[x1][y1]++;
        a[x1][y2]++;
        a[x2][y1]++;
        a[x2][y2]++;
    }
    for(i=1;i<=h;i++){
        for(j=1;j<=w;j++){
            a[i][j] = a[i][j] + a[i-1][j] + a[i][j-1] - a[i-1][j-1];
            cout << a[i][j]%2;
        }
        cout << "\n";
    }
    return 0;
}
/*
13 8 3
4 2 11 5
3 3 7 8
7 5 12 6
*/