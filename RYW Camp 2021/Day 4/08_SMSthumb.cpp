/*
    TASK : SMS Thumb
    AUTHOR : Apkmew
    SCHOOL : Kasetsart University
    LANG : C++
*/
#include <bits/stdc++.h>
using namespace  std;
char a[10][5];
vector<char> w;
int main(){
    a[2][1] = 'A', a[2][2] = 'B', a[2][3] = 'C';
    a[3][1] = 'D', a[3][2] = 'E', a[3][3] = 'F';
    a[4][1] = 'G', a[4][2] = 'H', a[4][3] = 'I';
    a[5][1] = 'J', a[5][2] = 'K', a[5][3] = 'L';
    a[6][1] = 'M', a[6][2] = 'N', a[6][3] = 'O';
    a[7][1] = 'P', a[7][2] = 'Q', a[7][3] = 'R', a[7][4] = 'S';
    a[8][1] = 'T', a[8][2] = 'U', a[8][3] = 'V';
    a[9][1] = 'W', a[9][2] = 'X', a[9][3] = 'Y', a[9][4] = 'Z';
    int n,s,m,x,y,i;
    //printf("%d ",w.size());
    scanf("%d",&n);
    n--;
    scanf("%d %d",&s,&m);
    if(s==1) m = m;
    else if(s==7 || s==9){
        m = m%4;
        if(m==0) m = 4;
    } 
    else{
        m = m%3;
        if(m==0) m = 3;
    }
    if(s!=1) w.push_back(a[s][m]); 
    //printf("%d ",w.size());
    while (n--)
    {
        scanf("%d %d %d",&x,&y,&m);
        s = s + x + 3 * y;
        if(s==1){
            while (m-- && !w.empty())
            {
                w.pop_back();
            }
        }
        else if(s==7 || s==9){
            m = m%4;
            if(m==0) m = 4;
        }
        else{
            m = m%3;
            if(m==0) m = 3;
        }
        if(s!=1) w.push_back(a[s][m]);
        //printf("%d ",w.size());
    }
    n = w.size();
    for(i=0;i<n;i++) printf("%c",w[i]);
    if(n==0) printf("null");
    //printf("%d",n);
    return 0;
}
/*
4
5 3
1 0 3
-1 1 3
1 -2 2

2
9 6
-2 -2 5

5
3 3 
0 0 2
-2 0 1
2 1 3
0 1 2
*/