/*
    TASK: Arm Hydraulic
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[10050];
stack<int> st;
int main()
{
    int q,n,num,k;
    scanf("%d",&q);
    while(q--){
        k = 1;
        scanf("%d",&n);
        while(n--){
            scanf("%d",&num);
            while(!st.empty() && st.top() == k){
                st.pop(); k++;
            }
            if(num != k) st.push(num);
            else k++;
        }
        while(!st.empty() && st.top() == k){
            st.pop(); k++;
        }
        if(st.empty()) printf("yes\n");
        else printf("no\n");
        while(!st.empty()) st.pop();
    }
    return 0;
}
/*
3
3
2 1 3
4
4 2 3 1
5
1 4 3 2 5
*/
