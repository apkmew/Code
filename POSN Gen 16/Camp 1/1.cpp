/*
    TASK: Lecture
    AUTHOR: Apimook Tratree
    SCHOOL: RYW
    LANG: C
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    FILE *fp;
    fp = fopen("D:\\file\\num.txt","r");
    char c;
    int cnt=0;
    while(!feof(fp)){
        c = fgetc(fp);
        if(c == '6') cnt++;

    }
    printf("%d",cnt);
    fclose(fp);
    return 0;
}

