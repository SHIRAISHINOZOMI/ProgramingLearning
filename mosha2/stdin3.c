#include<stdio.h>

int mytoupper(char c){
    if('A'<=c && c<='Z')
    c +=('a'-'A');
    return c;
}

int main(){
    char c;
    fprintf(stdout, "Input a string\n");
    while(c = getchar()!='\n'){
        c = mytoupper(c);
        printf("%c",c);
    }
    printf("\n");
    return 0;
}