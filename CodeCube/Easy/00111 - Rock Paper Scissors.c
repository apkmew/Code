#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b+c != 100){
        printf("BUG");
    }
    else if(a>b && a>c){
        printf("PAPER");
    }
    else if(b>a && b>c){
        printf("SCISSORS");
    }
    else if(c>a && c>b){
        printf("ROCK");
    }
    else if(a==b || a==c || b==c){
        printf("I DON'T KNOW");
    }
    return 0;
}
/*
90 8 2 PAPER
31 34 35 ROCK
100 100 100 BUG
50 50 0 I DON'T KNOW
20 60 20 SCISSORS
*/
