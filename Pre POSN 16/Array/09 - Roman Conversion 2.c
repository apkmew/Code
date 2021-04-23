/*
 TASK: Roman Conversion 2
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
#include<string.h>
char a[4500][4500];
int main(){
    int n,i,j,len,ans=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf(" %s",a[i]);
        len = strlen(a[i]);
        for(j=0;j<len;j++){
            if(a[i][j]=='M')    ans+=1000;
            else if(a[i][j]=='C' && a[i][j+1]=='M') ans+=900,j++;
            else if(a[i][j]=='D')   ans+=500;
            else if(a[i][j]=='C' && a[i][j+1]=='D') ans+=400,j++;
            else if(a[i][j]=='C')   ans+=100;
            else if(a[i][j]=='X' && a[i][j+1]=='C') ans+=90,j++;
            else if(a[i][j]=='L')   ans+=50;
            else if(a[i][j]=='X' && a[i][j+1]=='L') ans+=40,j++;
 .           else if(a[i][j]=='X')   ans+=10;
            else if(a[i][j]=='I' && a[i][j+1]=='X') ans+=9,j++;
            else if(a[i][j]=='V')   ans+=5;
            else if(a[i][j]=='I' && a[i][j+1]=='V') ans+=4,j++;
            else if(a[i][j]=='I')   ans+=1;
        }
        printf("%d\n",ans);
        ans=0;
    }
	return 0;
}
/*
3
DCCXXVI
XLIX
MMCDLXXXIX
*/
