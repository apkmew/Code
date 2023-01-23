/*
    Task	: A_RareOrder
    Language: C++
    Author	: Apkmew
    School	: Kasetsart University
    Created	: 27 December 2022 [23:22]
    Algo	: Graph
    Status	: Completed
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> g[30];
char old[30], now[30];
int in[30], mark[30];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int i, lenold, lennow;
    while (cin >> old){
        while (1){
            cin >> now;
            if (now[0] == '#') break;
            lenold = strlen(old);
            lennow = strlen(now);
            for (i = 0; i < min(lenold, lennow); i++){
                if (old[i] != now[i]){
                    mark[old[i] - 'A'] = 1;
                    mark[now[i] - 'A'] = 1;
                    g[old[i] - 'A'].push_back(now[i] - 'A');
                    in[now[i] - 'A']++;
                    break;
                }
            }
            strcpy(old, now);
        }
        for (i = 0; i < 26; i++){
            if (mark[i] == 0) continue;
            if (in[i] == 0){
                cout << (char)(i + 'A');
                mark[i] = 0;
                for (auto x : g[i]){
                    in[x]--;
                }
                i = -1;
            }
        }
        for(i=0;i<26;i++){
            g[i].clear();
            in[i] = 0;
            mark[i] = 0;
        }
        cout << "\n";
    }
    return 0;
}