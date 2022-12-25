/*
    Task	: 11_necklace
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 25 December 2022 [20:47]
    Algo	: Linked List
    Status	: Completed
*/
#include<bits/stdc++.h>
using namespace std;
int before[100100],after[100100];
int findtail(int root){
    if(after[root] == root) return root;
    return root = findtail(after[root]);
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int n,from,to,taila,tailb,root,i;
    cin >> n;
    for(i=1;i<=n;i++) before[i] = after[i] = i;
    for(i=1;i<=n-1;i++){
        cin >> from >> to;
        if(after[to] != to){
            // insert
            tailb = findtail(from);
            before[after[to]] = after[tailb];
            before[from] = to;
            after[tailb] = after[to];
            after[to] = from;
        }
        else if(after[to] == to){
            before[from] = to;
            after[to] = from;
        }
    }
    for(i=1;i<=n;i++){
        if(before[i]==i) root = i;
    }
    cout << root << " ";
    while(after[root] != root){
        root = after[root];
        cout << root << " ";
    }
    return 0;
}
/*
8
7 4
3 5
5 4
8 1
2 8
1 6
4 1 
*/