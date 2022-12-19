#include <stdio.h>
int main(){
    char c;
    scanf(" %c",&c);
    if('A' <= c && c <= 'Z') printf("Uppercase Letter");
    else if('a' <= c && c <= 'z') printf("Lowercase Letter");
    else if('0' <= c && c <= '9') printf("Number");
    else printf("Other");
    return 0;
}