/*
    Task	: 01_fin65_equalbuy
    Language: C++
    Author	: Apimook T. [APKMEW]
    School	: Kasetsart University
    Created	: 30 March 2023 [15:46]
    Algo	: Recursive
    Status	: Incomplete -> score: 90 [ [PP][PP][PP][PP][PP][PPP][PTP][PPP][PPP][PPP] ]
*/
#include<bits/stdc++.h>
using namespace std;
int mark[310];
void can_plus(int sum,int last,int now,int state){
    int i;
    if(state == 2){
        cout << sum << "\n";
        exit(0);
    }
    if(now > sum) return;
    if(now == sum){
        can_plus(sum,1,0,state+1);
    }
    for(i=last;i<=sum;i++){
        if(!mark[i]) continue;
        if(now+i>sum) return;
        mark[i]--;
        can_plus(sum,i,now+i,state);
        mark[i]++;
    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
    int i,n,num,sum=0;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> num;
        mark[num]++;
        sum += num;
    }
    for(i=sum/2;i>0;i--){
        can_plus(i,1,0,0);
    }
    cout << "0\n";
    return 0;
}