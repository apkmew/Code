#include<stdio.h>
#include<string.h>
char a[30];
int main(){
    int i,len,n,X,T,F,P,b = 1;
    scanf("%d",&n);
    while(n--){
        X = T = F = P = 0;
        scanf(" %s",a);
        len = strlen(a);
        for(i=0;i<len;i++){
            if(a[i] == 'X') X = 1;
            if(a[i] == 'T') T = 1;
            if(a[i] == '-') F = 1;
            if(a[i] == 'P') P = 1;
        }
        if(X == 1)
            printf("Case #%d: No - Runtime error\n\n",b);
        else if(T == 1)
            printf("Case #%d: No - Time limit exceeded\n\n",b);
        else if(F == 1)
            printf("Case #%d: No - Wrong answer\n\n",b);
        else if(P == 1)
            printf("Case #%d: Yes\n\n",b);
        b++;
    }
    return 0;
}
