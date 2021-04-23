/*
    TASK: Break
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[100500][5];
stack<int> st;
int main()
{
    int i,n;
    scanf("%d",&n);
    scanf("%d %d",&a[0][0],&a[0][1]);
    st.push(0);
    for(i=1;i<n;i++){
        scanf("%d %d",&a[i][0],&a[i][1]);
        while(!st.empty() && a[i][0]>a[st.top()][0]){
            printf("%d\n",a[st.top()][1]);
            st.pop();
        }
        st.push(i);
    }
    return 0;
}
/*
5
1 10
5 20
3 30
3 40
4 50
*/
