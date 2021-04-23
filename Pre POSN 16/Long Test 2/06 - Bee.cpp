/*
 TASK: Bee
 LANG: C++
 AUTHOR: Mew
*/

#include <bits/stdc++.h>
using namespace std;
int bee[30][3];
//0 work
//1 soldier
int main(){
    bee[0][0] = 1;
    for(int i=1;i<=24;i++){
        bee[i][0] = bee[i-1][0]+bee[i-1][1]+1;
        bee[i][1] = bee[i-1][0];
    }
    int num;
    while(1){
        scanf("%d",&num);
        if(num == -1)   break;
        printf("%d %d\n",bee[num][0],bee[num][0]+bee[num][1]+1);
    }
	return 0;
}
