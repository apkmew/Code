#include <bits/stdc++.h>
using namespace std;
char a[210],b[210];
char ans[210],now[210];
int cnt,mx=-1,lena,lenb;
void play(int i,int j,int state){
    cnt++;
    now[state] = a[i];
    if(a[i+1]==b[j+1] && i<lena && j<lenb){
        play(i+1,j+1,state+1);
    }
}
int main(){
    int i,j;
    scanf(" %s",a);
    scanf(" %s",b);
    lena = strlen(a);
    lenb = strlen(b);
    for(i=0;i<lena;i++){
        for(j=0;j<lenb;j++){
            cnt = 0;
            //memset(b,NULL,sizeof b);
            if(a[i]==b[j]){
                play(i,j,0);
                if(cnt > mx){
                    mx = cnt;
                    strcpy(ans,now);
                }
            }
        }
    }
    printf("%s",ans);
    return 0;
}
