/*
 TASK: If - else
 LANG: C
 AUTHOR: Mew
*/

#include <stdio.h>
int main(){
    char a;
    scanf(" %c",&a);
    switch(a){
    case 'A' : printf("One\n")  break;
    case 'B' : printf("Two\n")  break;
    case 'C' : printf("Three\n")  break;
    default : printf("Four\n");
    }

	return 0;
}
