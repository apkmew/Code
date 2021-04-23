/*
    TASK: Easiest
    LANG: CPP
    AUTHOR: Mew
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
priority_queue<int> heap;
int main()
{
    int P,num;
    char opr;
    scanf("%d",&P);
    while(P--){
        scanf(" %c",&opr);
        if(opr == 'A'){
            scanf("%d",&num);
            heap.push(num*-1);
        }
        else{
            if(heap.empty()) printf("-1\n");
            else printf("%d\n",heap.top()*-1),heap.pop();
        }
    }
    return 0;
}
