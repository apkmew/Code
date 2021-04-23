#include<stdio.h>
#include<string.h>
char a[1010];
int main(){
    int len,i,ans=0;
    scanf(" %s",a);
    len = strlen(a);
    for(i=0;i<len;i++){
        if(a[i] == 'S' || a[i] == 's'){
            if(a[i+1] == 'I' || a[i+1] == 'i'){
                if(a[i+2] == 'P' || a[i+2] == 'p'){
                    if(a[i+3] == 'A' || a[i+3] == 'a'){
                        ans++;
                    }
                }
            }
        }
    }
    for(i=0;i<len;i++){
        if((a[i] == 'S' || a[i] == 's') && (a[i+1] == 'I' || a[i+1] == 'i') && (a[i+2] == 'P' || a[i+2] == 'p') && (a[i+3] == 'A' || a[i+3] == 'a')){
            if(a[i+1] == 'I' || a[i+1] == 'i'){
                if(a[i+2] == 'P' || a[i+2] == 'p'){
                    if(a[i+3] == 'A' || a[i+3] == 'a'){
                        printf("\"%c%c%c%c\"",a[i],a[i+1],a[i+2],a[i+3]);
                        i+=3;
                    }
                }
            }
        }
        else
            printf("%c",a[i]);
    }
    printf("\n");
   // printf("%s\n",a);
    printf("%d\n",ans);
    return 0;
}
