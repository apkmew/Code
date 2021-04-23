/*
 TASK: Peatty Robot Gen2
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
#include<string.h>
char a[110];
int main(){
    int len,i;
    scanf(" %s",a);
    len = strlen(a);
    for(i=0;i<len;i++){
        if(i==0){
            switch(a[i]){
                case 'N' : printf("F"); break;
                case 'E' : printf("RF");    break;
                case 'S' : printf("RRF");   break;
                case 'W' : printf("RRRF");  break;
                case 'Z' : printf("Z");
            }
        }
        else{
            if(a[i]=='N'){
                if(a[i-1]=='N' || a[i-1]=='Z') printf("F");
                else if(a[i-1]=='E') printf("RRRF");
                else if(a[i-1]=='S') printf("RRF");
                else if(a[i-1]=='W') printf("RF");
            }
            else if(a[i]=='E'){
                if(a[i-1]=='E') printf("F");
                else if(a[i-1]=='N' || a[i-1]=='Z') printf("RF");
                else if(a[i-1]=='W') printf("RRF");
                else if(a[i-1]=='S') printf("RRRF");
            }
            else if(a[i]=='S'){
                if(a[i-1]=='S') printf("F");
                else if(a[i-1]=='E') printf("RF");
                else if(a[i-1]=='N' || a[i-1]=='Z') printf("RRF");
                else if(a[i-1]=='W') printf("RRRF");
            }
            else if(a[i]=='W'){
                if(a[i-1]=='W') printf("F");
                else if(a[i-1]=='S') printf("RF");
                else if(a[i-1]=='E') printf("RRF");
                else if(a[i-1]=='N' || a[i-1]=='Z') printf("RRRF");
            }
            else if(a[i]=='Z')   printf("Z");
        }
    }
	return 0;
}
// NNEESWZEE
