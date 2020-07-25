#include<stdio.h>
#include<stdlib.h>

int mytoupper(char c){
    if('A'<=c&& c<='Z'){
        c +=('a'-'A');
    }else if('0'<=c && c <= '9'){
        fpeintf(stderr,"\"%c\" is an integar\n",c);
    }
}


int main(){
    char c;
    printf("Input a String\n");
    while((c=getchar())!='\n'){
        c = mytoupper(c);
        printf("%c",c);
    }
        printf("\n");
        return 0;
}